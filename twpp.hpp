#pragma once

#ifndef TWPP_HPP
#define TWPP_HPP

#ifndef TWPP_NO_GLM
    #ifdef __has_include
        #if __has_include(<glm/glm.hpp>)
            #include <glm/glm.hpp>
            #define TWPP_GLM_FOUND
        #endif //__has_include(<glm/glm.hpp>)
    #endif //__has_include
#endif // TWPP_NO_GLM

#ifdef TWPP_NO_EXCEPTIONS
    #include <cassert>
#else // TWPP_NO_EXCEPTIONS
    #include <stdexcept>
#endif // TWPP_NO_EXCEPTIONS

#include <string>
#include <cstdint>

namespace twpp {

#ifdef TWPP_GLM_FOUND
    /**
     * @brief Converts a hexadecimal color to an RGB value [if GLM found]. 
     * 
     * @param hex Color in hexadecimal format (e.g., 0x3B82F6)
     * @return glm::u8vec3 RGB value corresponding to the hex code
     */
    constexpr glm::u8vec3 hex_to_rgb(unsigned int hex) noexcept {
        return glm::u8vec3(
            static_cast<uint8_t>((hex >> 16) & 0xFF), // Red
            static_cast<uint8_t>((hex >>  8) & 0xFF), // Green
            static_cast<uint8_t>((hex >>  0) & 0xFF)  // Blue
        );
    }
#endif // TWPP_GLM_FOUND

    /**
     * @brief Main color type later converted to everything else  
     * Union with multiple ways to access color data (similar to glm::u8vec3)
     */
    union colorType {
        struct {uint8_t r, g, b;};
        struct {uint8_t x, y, z;};
        uint8_t data[3];

        constexpr colorType(uint8_t _r, uint8_t _g, uint8_t _b) noexcept : r(_r), g(_g), b(_b) {}
    };

    /**
     * @brief Proxy class to provide conversion operations for color types
     */
    class ColorProxy {
    private:
        const colorType color;

    public:
        constexpr ColorProxy(colorType color_) noexcept : color(color_) {}

#ifdef TWPP_GLM_FOUND
        // Conversion operators for GLM types
        constexpr operator glm::u8vec3() const noexcept {
            return {color.r, color.g, color.b};
        }

        constexpr operator glm::vec3() const noexcept {
            return glm::vec3(
                static_cast<float>(color.r) / 255.0f, 
                static_cast<float>(color.g) / 255.0f,
                static_cast<float>(color.b) / 255.0f
            );
        }

        constexpr operator glm::dvec3() const noexcept {
            return glm::dvec3(
                static_cast<double>(color.r) / 255.0, 
                static_cast<double>(color.g) / 255.0,
                static_cast<double>(color.b) / 255.0
            );
        }

        constexpr operator glm::u8vec4() const noexcept {
            return glm::u8vec4(
                color.r, 
                color.g, 
                color.b, 
                255 // Alpha default to 255 (fully opaque)
                );
        }

        constexpr operator glm::vec4() const noexcept {
            return glm::vec4(
                static_cast<float>(color.r) / 255.0f,
                static_cast<float>(color.g) / 255.0f,
                static_cast<float>(color.b) / 255.0f,
                1.0f  // Alpha default to 1.0f (fully opaque)
            );
        }

        constexpr operator glm::dvec4() const noexcept {
            return glm::dvec4(
                static_cast<double>(color.r) / 255.0,
                static_cast<double>(color.g) / 255.0,
                static_cast<double>(color.b) / 255.0,
                1.0   // Alpha default to 1.0 (fully opaque)
            );
        }
#else // TWPP_GLM_FOUND
        constexpr operator colorType() const noexcept {
            return color;
        }
#endif // TWPP_GLM_FOUND

        /**
         * @brief Conversion to a 24-bit packed RGB value in a uint32_t
         * 
         * @return uint32_t 24-bit RGB color
         */
        constexpr operator uint32_t() const noexcept {
            return (static_cast<uint32_t>(color.r) << 16) | 
                   (static_cast<uint32_t>(color.g) << 8) | 
                    static_cast<uint32_t>(color.b);
        }

#if __cplusplus >= 202207L // 202207L relaxed constexpr restrictions
        /**
         * @brief Conversion to a hexadecimal color string.
         * 
         * @return std::string Hexadecimal color in format "#RRGGBB"
         */
        constexpr 
#endif // __cplusplus >= 202207L
        operator std::string() const noexcept {
            char hex[8];
            std::snprintf(hex, sizeof(hex), "#%02X%02X%02X", color.r, color.g, color.b);
            return std::string(hex);
        }

#ifdef TWPP_CUSTOM_CONVERSIONS
    // Include custom conversions file if specified
    #include TWPP_CUSTOM_CONVERSIONS
#endif // TWPP_CUSTOM_CONVERSIONS
    };

    // Generated standart Tailwind colors
    // Switch statements are used because [i believe] they are faster to compile (than something like constexpr hashtable / iterating over array)
    #include "twpp_colors.hpp"

    /* 
    Custom color functions. Generate them with generator.py / write yourself
    example:
        #define CUSTOM_TWPP_COLORS "your_custom_colors.hpp"
        #include "twpp.hpp"
    */
#ifdef TWPP_CUSTOM_COLORS
    // Include custom color file if specified
    #include CUSTOM_TWPP_COLORS
#endif // TWPP_CUSTOM_COLORS

} // namespace twpp

#endif // TWPP_HPP
