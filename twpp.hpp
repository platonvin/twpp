#pragma once
#ifndef TWPP_HPP
#define TWPP_HPP

#include <glm/glm.hpp>
// #include <cassert>
#include <stdexcept>

namespace twpp {
    constexpr glm::vec3 hex_to_rgb(unsigned int hex) {
        return glm::vec3(
            ((hex >> 16) & 0xFF) / 255.0f,  // Red
            ((hex >> 8) & 0xFF) / 255.0f,   // Green
            (hex & 0xFF) / 255.0f           // Blue
        );
    }

    constexpr glm::u8vec3 uvec(glm::vec3 fcolor) {
        return glm::u8vec3(
            (fcolor.r*255.0),
            (fcolor.g*255.0),
            (fcolor.b*255.0)
        );
    }
    // Generated standart Tailwind color functions
    // Switch statements are used because [i believe] they are faster to compile
    #include "twpp_colors.hpp"

    /* 
    Custom color functions. Generate them with generator.py / write yourself
    example:
        #define CUSTOM_TWPP_COLORS "your_custom_colors.hpp"
        #include "twpp.hpp"
    */
    #ifdef TWPP_CUSTOM_COLORS
        #include CUSTOM_TWPP_COLORS
    #endif // TWPP_CUSTOM_COLORS
} // namespace twpp

#endif // TWPP_HPP