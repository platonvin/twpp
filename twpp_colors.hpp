constexpr ColorProxy slate(int shade) {
    switch (shade) {
        case 50: return colorType(248, 250, 252);
        case 100: return colorType(241, 245, 249);
        case 200: return colorType(226, 232, 240);
        case 300: return colorType(203, 213, 225);
        case 400: return colorType(148, 163, 184);
        case 500: return colorType(100, 116, 139);
        case 600: return colorType(71, 85, 105);
        case 700: return colorType(51, 65, 85);
        case 800: return colorType(30, 41, 59);
        case 900: return colorType(15, 23, 42);
        case 950: return colorType(2, 6, 23);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy gray(int shade) {
    switch (shade) {
        case 50: return colorType(249, 250, 251);
        case 100: return colorType(243, 244, 246);
        case 200: return colorType(229, 231, 235);
        case 300: return colorType(209, 213, 219);
        case 400: return colorType(156, 163, 175);
        case 500: return colorType(107, 114, 128);
        case 600: return colorType(75, 85, 99);
        case 700: return colorType(55, 65, 81);
        case 800: return colorType(31, 41, 55);
        case 900: return colorType(17, 24, 39);
        case 950: return colorType(3, 7, 18);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy zinc(int shade) {
    switch (shade) {
        case 50: return colorType(250, 250, 250);
        case 100: return colorType(244, 244, 245);
        case 200: return colorType(228, 228, 231);
        case 300: return colorType(212, 212, 216);
        case 400: return colorType(161, 161, 170);
        case 500: return colorType(113, 113, 122);
        case 600: return colorType(82, 82, 91);
        case 700: return colorType(63, 63, 70);
        case 800: return colorType(39, 39, 42);
        case 900: return colorType(24, 24, 27);
        case 950: return colorType(9, 9, 11);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy neutral(int shade) {
    switch (shade) {
        case 50: return colorType(250, 250, 250);
        case 100: return colorType(245, 245, 245);
        case 200: return colorType(229, 229, 229);
        case 300: return colorType(212, 212, 212);
        case 400: return colorType(163, 163, 163);
        case 500: return colorType(115, 115, 115);
        case 600: return colorType(82, 82, 82);
        case 700: return colorType(64, 64, 64);
        case 800: return colorType(38, 38, 38);
        case 900: return colorType(23, 23, 23);
        case 950: return colorType(10, 10, 10);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy stone(int shade) {
    switch (shade) {
        case 50: return colorType(250, 250, 249);
        case 100: return colorType(245, 245, 244);
        case 200: return colorType(231, 229, 228);
        case 300: return colorType(214, 211, 209);
        case 400: return colorType(168, 162, 158);
        case 500: return colorType(120, 113, 108);
        case 600: return colorType(87, 83, 78);
        case 700: return colorType(68, 64, 60);
        case 800: return colorType(41, 37, 36);
        case 900: return colorType(28, 25, 23);
        case 950: return colorType(12, 10, 9);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy red(int shade) {
    switch (shade) {
        case 50: return colorType(254, 242, 242);
        case 100: return colorType(254, 226, 226);
        case 200: return colorType(254, 202, 202);
        case 300: return colorType(252, 165, 165);
        case 400: return colorType(248, 113, 113);
        case 500: return colorType(239, 68, 68);
        case 600: return colorType(220, 38, 38);
        case 700: return colorType(185, 28, 28);
        case 800: return colorType(153, 27, 27);
        case 900: return colorType(127, 29, 29);
        case 950: return colorType(69, 10, 10);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy orange(int shade) {
    switch (shade) {
        case 50: return colorType(255, 247, 237);
        case 100: return colorType(255, 237, 213);
        case 200: return colorType(254, 215, 170);
        case 300: return colorType(253, 186, 116);
        case 400: return colorType(251, 146, 60);
        case 500: return colorType(249, 115, 22);
        case 600: return colorType(234, 88, 12);
        case 700: return colorType(194, 65, 12);
        case 800: return colorType(154, 52, 18);
        case 900: return colorType(124, 45, 18);
        case 950: return colorType(67, 20, 7);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy amber(int shade) {
    switch (shade) {
        case 50: return colorType(255, 251, 235);
        case 100: return colorType(254, 243, 199);
        case 200: return colorType(253, 230, 138);
        case 300: return colorType(252, 211, 77);
        case 400: return colorType(251, 191, 36);
        case 500: return colorType(245, 158, 11);
        case 600: return colorType(217, 119, 6);
        case 700: return colorType(180, 83, 9);
        case 800: return colorType(146, 64, 14);
        case 900: return colorType(120, 53, 15);
        case 950: return colorType(69, 26, 3);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy yellow(int shade) {
    switch (shade) {
        case 50: return colorType(254, 252, 232);
        case 100: return colorType(254, 249, 195);
        case 200: return colorType(254, 240, 138);
        case 300: return colorType(253, 224, 71);
        case 400: return colorType(250, 204, 21);
        case 500: return colorType(234, 179, 8);
        case 600: return colorType(202, 138, 4);
        case 700: return colorType(161, 98, 7);
        case 800: return colorType(133, 77, 14);
        case 900: return colorType(113, 63, 18);
        case 950: return colorType(66, 32, 6);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy lime(int shade) {
    switch (shade) {
        case 50: return colorType(247, 254, 231);
        case 100: return colorType(236, 252, 203);
        case 200: return colorType(217, 249, 157);
        case 300: return colorType(190, 242, 100);
        case 400: return colorType(163, 230, 53);
        case 500: return colorType(132, 204, 22);
        case 600: return colorType(101, 163, 13);
        case 700: return colorType(77, 124, 15);
        case 800: return colorType(63, 98, 18);
        case 900: return colorType(54, 83, 20);
        case 950: return colorType(26, 46, 5);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy green(int shade) {
    switch (shade) {
        case 50: return colorType(240, 253, 244);
        case 100: return colorType(220, 252, 231);
        case 200: return colorType(187, 247, 208);
        case 300: return colorType(134, 239, 172);
        case 400: return colorType(74, 222, 128);
        case 500: return colorType(34, 197, 94);
        case 600: return colorType(22, 163, 74);
        case 700: return colorType(21, 128, 61);
        case 800: return colorType(22, 101, 52);
        case 900: return colorType(20, 83, 45);
        case 950: return colorType(5, 46, 22);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy emerald(int shade) {
    switch (shade) {
        case 50: return colorType(236, 253, 245);
        case 100: return colorType(209, 250, 229);
        case 200: return colorType(167, 243, 208);
        case 300: return colorType(110, 231, 183);
        case 400: return colorType(52, 211, 153);
        case 500: return colorType(16, 185, 129);
        case 600: return colorType(5, 150, 105);
        case 700: return colorType(4, 120, 87);
        case 800: return colorType(6, 95, 70);
        case 900: return colorType(6, 78, 59);
        case 950: return colorType(2, 44, 34);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy teal(int shade) {
    switch (shade) {
        case 50: return colorType(240, 253, 250);
        case 100: return colorType(204, 251, 241);
        case 200: return colorType(153, 246, 228);
        case 300: return colorType(94, 234, 212);
        case 400: return colorType(45, 212, 191);
        case 500: return colorType(20, 184, 166);
        case 600: return colorType(13, 148, 136);
        case 700: return colorType(15, 118, 110);
        case 800: return colorType(17, 94, 89);
        case 900: return colorType(19, 78, 74);
        case 950: return colorType(4, 47, 46);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy cyan(int shade) {
    switch (shade) {
        case 50: return colorType(236, 254, 255);
        case 100: return colorType(207, 250, 254);
        case 200: return colorType(165, 243, 252);
        case 300: return colorType(103, 232, 249);
        case 400: return colorType(34, 211, 238);
        case 500: return colorType(6, 182, 212);
        case 600: return colorType(8, 145, 178);
        case 700: return colorType(14, 116, 144);
        case 800: return colorType(21, 94, 117);
        case 900: return colorType(22, 78, 99);
        case 950: return colorType(8, 51, 68);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy sky(int shade) {
    switch (shade) {
        case 50: return colorType(240, 249, 255);
        case 100: return colorType(224, 242, 254);
        case 200: return colorType(186, 230, 253);
        case 300: return colorType(125, 211, 252);
        case 400: return colorType(56, 189, 248);
        case 500: return colorType(14, 165, 233);
        case 600: return colorType(2, 132, 199);
        case 700: return colorType(3, 105, 161);
        case 800: return colorType(7, 89, 133);
        case 900: return colorType(12, 74, 110);
        case 950: return colorType(8, 47, 73);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy blue(int shade) {
    switch (shade) {
        case 50: return colorType(239, 246, 255);
        case 100: return colorType(219, 234, 254);
        case 200: return colorType(191, 219, 254);
        case 300: return colorType(147, 197, 253);
        case 400: return colorType(96, 165, 250);
        case 500: return colorType(59, 130, 246);
        case 600: return colorType(37, 99, 235);
        case 700: return colorType(29, 78, 216);
        case 800: return colorType(30, 64, 175);
        case 900: return colorType(30, 58, 138);
        case 950: return colorType(23, 37, 84);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy indigo(int shade) {
    switch (shade) {
        case 50: return colorType(238, 242, 255);
        case 100: return colorType(224, 231, 255);
        case 200: return colorType(199, 210, 254);
        case 300: return colorType(165, 180, 252);
        case 400: return colorType(129, 140, 248);
        case 500: return colorType(99, 102, 241);
        case 600: return colorType(79, 70, 229);
        case 700: return colorType(67, 56, 202);
        case 800: return colorType(55, 48, 163);
        case 900: return colorType(49, 46, 129);
        case 950: return colorType(30, 27, 75);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy violet(int shade) {
    switch (shade) {
        case 50: return colorType(245, 243, 255);
        case 100: return colorType(237, 233, 254);
        case 200: return colorType(221, 214, 254);
        case 300: return colorType(196, 181, 253);
        case 400: return colorType(167, 139, 250);
        case 500: return colorType(139, 92, 246);
        case 600: return colorType(124, 58, 237);
        case 700: return colorType(109, 40, 217);
        case 800: return colorType(91, 33, 182);
        case 900: return colorType(76, 29, 149);
        case 950: return colorType(46, 16, 101);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy purple(int shade) {
    switch (shade) {
        case 50: return colorType(250, 245, 255);
        case 100: return colorType(243, 232, 255);
        case 200: return colorType(233, 213, 255);
        case 300: return colorType(216, 180, 254);
        case 400: return colorType(192, 132, 252);
        case 500: return colorType(168, 85, 247);
        case 600: return colorType(147, 51, 234);
        case 700: return colorType(126, 34, 206);
        case 800: return colorType(107, 33, 168);
        case 900: return colorType(88, 28, 135);
        case 950: return colorType(59, 7, 100);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy fuchsia(int shade) {
    switch (shade) {
        case 50: return colorType(253, 244, 255);
        case 100: return colorType(250, 232, 255);
        case 200: return colorType(245, 208, 254);
        case 300: return colorType(240, 171, 252);
        case 400: return colorType(232, 121, 249);
        case 500: return colorType(217, 70, 239);
        case 600: return colorType(192, 38, 211);
        case 700: return colorType(162, 28, 175);
        case 800: return colorType(134, 25, 143);
        case 900: return colorType(112, 26, 117);
        case 950: return colorType(74, 4, 78);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy pink(int shade) {
    switch (shade) {
        case 50: return colorType(253, 242, 248);
        case 100: return colorType(252, 231, 243);
        case 200: return colorType(251, 207, 232);
        case 300: return colorType(249, 168, 212);
        case 400: return colorType(244, 114, 182);
        case 500: return colorType(236, 72, 153);
        case 600: return colorType(219, 39, 119);
        case 700: return colorType(190, 24, 93);
        case 800: return colorType(157, 23, 77);
        case 900: return colorType(131, 24, 67);
        case 950: return colorType(80, 7, 36);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}

constexpr ColorProxy rose(int shade) {
    switch (shade) {
        case 50: return colorType(255, 241, 242);
        case 100: return colorType(255, 228, 230);
        case 200: return colorType(254, 205, 211);
        case 300: return colorType(253, 164, 175);
        case 400: return colorType(251, 113, 133);
        case 500: return colorType(244, 63, 94);
        case 600: return colorType(225, 29, 72);
        case 700: return colorType(190, 18, 60);
        case 800: return colorType(159, 18, 57);
        case 900: return colorType(136, 19, 55);
        case 950: return colorType(76, 5, 25);
#ifdef TWPP_USE_EXCEPTIONS
        default: throw std::out_of_range("shade not found");
#else
        default: assert(false && "specified shade not found");
#endif
    }
}