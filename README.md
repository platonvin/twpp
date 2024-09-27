# TWPP 
TailWind colors in c-Plus-Plus
## Overview 
**TWPP**  is a C++17 syntax sugar that lets you define color in Tailwind CSS style. It is not really doing anything


## Usage 
`#include "twpp.hpp"`

* All defines should be defined before `#include "twpp.hpp"`
 
* If GLM found and `TWPP_NO_GLM` not defined, conversion to GLM types will be defined 
 
* Add more colors by defining `TWPP_CUSTOM_COLORS` to "your_file_with_colors.hpp". This file should be created with generator.py

* Conversions to more types can be added by defining `TWPP_CUSTOM_CONVERSIONS` to "your_file_with_conversions.hpp". (see twpp.hpp)

* Define `TWPP_NO_EXCEPTIONS` to replace throw's with assert's

### Example

```cpp
#define TWPP_NO_EXCEPTIONS // Optional: disable exceptions
#define TWPP_CUSTOM_COLORS "my_custom_colors.hpp" // Optional: custom colors
#define TWPP_CUSTOM_CONVERSIONS "my_conversions.hpp" // Optional: custom conversions
#include "twpp.hpp"
#include <iostream>
#include <glm/glm.hpp>

// for static_assert check
constexpr float ce_dist_2(glm::vec3 a, glm::vec3 b) {
    return ((a.x-b.x)*(a.x-b.x)+
            (a.y-b.y)*(a.y-b.y)+
            (a.z-b.z)*(a.z-b.z));
}
int main() {
    // Get shade 200 for color 'pink' from Tailwind and cast it to GLM's vec<3, float>
    glm::vec3 color  = twpp::pink(200);

    // 0.984314 0.811765 0.909804
    std::cout << color.x << " " 
              << color.y << " " 
              << color.z << "\n"; 


    /*  Uncommenting the following line will not compile, 
        as shade 501 does not exist. Compiler will try to constepxr case default:
        but throw/assert is not constepxr and this will produce an error: */
    // constexpr glm::u8vec3 color_with_error_comptime = twpp::blue(501);

    // This compiles but will throw/assert at runtime:
    // glm::u8vec3 color_with_error_runtime = twpp::blue(501);


    constexpr glm::u8vec3 color_u8 = twpp::blue(500);
    constexpr glm::vec3 color_vec3  = twpp::pink(200);
    constexpr uint32_t packed_color = twpp::gray(800);

    static_assert((color_u8==glm::u8vec3(59, 130, 246)), "u8vec3 twpp::blue(500)");
    static_assert((ce_dist_2(color_vec3,glm::vec3(0.984314, 0.811765, 0.909804))<0.01f), "u8vec3 twpp::pink(200)");
    static_assert((packed_color==0x1f2937), "u8vec3 twpp::gray(800)");

    return 0;
}
```