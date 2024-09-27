#pragma once
#ifndef TWPP_HPP
#define TWPP_HPP

#if __has_include(<glm/glm.hpp>)
#include <glm/glm.hpp>
#define TWPP_GLM_FOUND
#endif

#ifdef TWPP_USE_EXCEPTIONS
#include <stdexcept>
#else
#include <cassert>
#endif
#include <string>

namespace twpp {
#ifdef TWPP_GLM_FOUND
    //may be usefull for creating
    constexpr glm::u8vec3 hex_to_rgb(unsigned int hex) {
        return glm::u8vec3(
            ((hex >> 16) & 0xFF), // Red
            ((hex >>  8) & 0xFF), // Green
            ((hex >>  0) & 0xFF)  // Blue
        ); 
    }
#endif //TWPP_GLM_FOUND

#ifdef TWPP_GLM_FOUND
    typedef glm::u8vec3 colorType;
#else //TWPP_GLM_FOUND
    union colorType {
        struct {uint8_t r,g,b;};
        struct {uint8_t x,y,z;};
        struct {uint8_t data[3];};
        constexpr colorType(uint8_t _r, uint8_t _g, uint8_t _b) {r=_r; g=_g; b=_b;};
    };

#endif //TWPP_GLM_FOUND
    class ColorProxy {
    private:
        const colorType color;

    public:
        constexpr ColorProxy(colorType color_) : color(color_) {}

#ifdef TWPP_GLM_FOUND
        constexpr operator glm::u8vec3() const {
            return color;
        }
        constexpr operator glm::vec3() const {
            return glm::vec3(
                float(color.r) / 255.0f, 
                float(color.g) / 255.0f,
                float(color.b) / 255.0f);
        }
        constexpr operator glm::dvec3() const {
            return glm::dvec3(
                double(color.r) / 255.0, 
                double(color.g) / 255.0,
                double(color.b) / 255.0);
        }
        
        constexpr operator glm::u8vec4() const {
            return glm::u8vec4(
                color.r,
                color.g,
                color.b,
                255  //default alpha to 255 (fully opaque)
            );
        }
        constexpr operator glm::vec4() const {
            return glm::vec4(
                float(color.r) / 255.0f,
                float(color.g) / 255.0f,
                float(color.b) / 255.0f,
                1.0f  //default alpha to 1 (fully opaque)
            );
        }
        constexpr operator glm::dvec4() const {
            return glm::dvec4(
                double(color.r) / 255.0,
                double(color.g) / 255.0,
                double(color.b) / 255.0,
                1.0f  //default alpha to 1 (fully opaque)
            );
        }
#else 
        constexpr operator colorType() const {
            return color;
        }
#endif //TWPP_GLM_FOUND
        // NO ALPHA CHANNEL
        constexpr operator uint32_t() const {
            return (color.r << 16) | (color.g << 8) | color.b;
        }

    /* 
    Custom conversion operators. Write them yourself
    examples up above
    */
    #ifdef TWPP_CUSTOM_CONVERSIONS
        #include TWPP_CUSTOM_CONVERSIONS
    #endif // TWPP_CUSTOM_CONVERSIONS

        // Conversion to hexadecimal string (e.g., "#F6F6F6")
#if __cplusplus >= 202207L // 202207L Relaxed some constexpr restrictions
        constexpr 
#endif //__cplusplus >= 202207L
        operator std::string() const noexcept {
            char hex[8] = {0};
            snprintf(hex, sizeof(hex), "#%02X%02X%02X", color.r, color.g, color.b);
            return std::string(hex);
        }
    };

    // Generated standart Tailwind colors
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
} //namespace twpp

#endif //TWPP_HPP