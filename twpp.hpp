#pragma once
#ifndef TWPP_HPP
#define TWPP_HPP

#include <glm/glm.hpp>
#include <cassert>

namespace twpp {
    constexpr glm::vec3 hex_to_rgb(unsigned int hex) {
        return glm::vec3(
            ((hex >> 16) & 0xFF) / 255.0f,  // Red
            ((hex >> 8) & 0xFF) / 255.0f,   // Green
            (hex & 0xFF) / 255.0f           // Blue
        );
    }

    // Generated color functions
    #include "twpp_colors.hpp"

} // namespace twpp

#endif // TWPP_HPP