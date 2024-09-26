import json

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
    cpp_lines.append('        default: assert(false && "shade not found");')
    cpp_lines.append('    }')
    cpp_lines.append('}')
    return '\n'.join(cpp_lines)

def main():
    # Tailwind colors stolen from github gist 
    with open("tailwind_colors.json", "r") as file:
        tailwind_colors = json.load(file)

    cpp_code = []

    # Generate some fun(s)
    for color_name, shades in tailwind_colors.items():
        cpp_code.append(generate_cpp_color_function(color_name, shades))

    with open("twpp_colors.hpp", "w") as f:
        f.write('\n\n'.join(cpp_code))

if __name__ == "__main__":
    main()
