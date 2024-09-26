# usage example: py .\generator.py -i .\tailwind_colors.json -o .\twpp_colors.hpp
# multiple files: py .\generator.py -i .\file1.json .\file2.json -o .\twpp_colors.hpp

import json
import argparse
import os

def hex_to_rgb_tuple(hex_color):
    hex_color = hex_color.lstrip('#')
    r = int(hex_color[0:2], 16) / 255.0
    g = int(hex_color[2:4], 16) / 255.0
    b = int(hex_color[4:6], 16) / 255.0
    return f'glm::vec3({r:.6f}, {g:.6f}, {b:.6f})'

def generate_cpp_color_function(color_name, shades):
    cpp_lines = [f'constexpr glm::vec3 {color_name}(int shade) {{']
    cpp_lines.append('    switch (shade) {')
    for shade, hex_color in shades.items():
        cpp_lines.append(f'        case {shade}: return {hex_to_rgb_tuple(hex_color)};')
    cpp_lines.append('        default: throw std::out_of_range("shade not found");') # was assert better?
    cpp_lines.append('    }')
    cpp_lines.append('}')
    return '\n'.join(cpp_lines)

# For multiple input files
def generate_color_functions(input_files):
    cpp_code = []
    # print(input_files)
    for input_file in input_files:
        with open(input_file, "r") as file:
            colors = json.load(file)
        
        for color_name, shades in colors.items():
            cpp_code.append(generate_cpp_color_function(color_name, shades))
    
    return cpp_code

def main():
    parser = argparse.ArgumentParser(description="Generate C++ color functions from Tailwind CSS color JSON files.")
    parser.add_argument('-i', '--input', nargs='+', help="Input JSON file(s) containing color definitions", required=True)
    parser.add_argument('-o', '--output', help="Output C++ header file", required=True)
    args = parser.parse_args()

    # Validator
    for input_file in args.input:
        if not os.path.isfile(input_file):
            raise FileNotFoundError(f"Input file '{input_file}' not found.")

    cpp_code = generate_color_functions(args.input)
    with open(args.output, "w") as f:
        f.write('\n\n'.join(cpp_code))

if __name__ == "__main__":
    main()