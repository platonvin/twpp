constexpr glm::vec3 slate(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.972549, 0.980392, 0.988235);
        case 100: return glm::vec3(0.945098, 0.960784, 0.976471);
        case 200: return glm::vec3(0.886275, 0.909804, 0.941176);
        case 300: return glm::vec3(0.796078, 0.835294, 0.882353);
        case 400: return glm::vec3(0.580392, 0.639216, 0.721569);
        case 500: return glm::vec3(0.392157, 0.454902, 0.545098);
        case 600: return glm::vec3(0.278431, 0.333333, 0.411765);
        case 700: return glm::vec3(0.200000, 0.254902, 0.333333);
        case 800: return glm::vec3(0.117647, 0.160784, 0.231373);
        case 900: return glm::vec3(0.058824, 0.090196, 0.164706);
        case 950: return glm::vec3(0.007843, 0.023529, 0.090196);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 gray(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.976471, 0.980392, 0.984314);
        case 100: return glm::vec3(0.952941, 0.956863, 0.964706);
        case 200: return glm::vec3(0.898039, 0.905882, 0.921569);
        case 300: return glm::vec3(0.819608, 0.835294, 0.858824);
        case 400: return glm::vec3(0.611765, 0.639216, 0.686275);
        case 500: return glm::vec3(0.419608, 0.447059, 0.501961);
        case 600: return glm::vec3(0.294118, 0.333333, 0.388235);
        case 700: return glm::vec3(0.215686, 0.254902, 0.317647);
        case 800: return glm::vec3(0.121569, 0.160784, 0.215686);
        case 900: return glm::vec3(0.066667, 0.094118, 0.152941);
        case 950: return glm::vec3(0.011765, 0.027451, 0.070588);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 zinc(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.980392, 0.980392, 0.980392);
        case 100: return glm::vec3(0.956863, 0.956863, 0.960784);
        case 200: return glm::vec3(0.894118, 0.894118, 0.905882);
        case 300: return glm::vec3(0.831373, 0.831373, 0.847059);
        case 400: return glm::vec3(0.631373, 0.631373, 0.666667);
        case 500: return glm::vec3(0.443137, 0.443137, 0.478431);
        case 600: return glm::vec3(0.321569, 0.321569, 0.356863);
        case 700: return glm::vec3(0.247059, 0.247059, 0.274510);
        case 800: return glm::vec3(0.152941, 0.152941, 0.164706);
        case 900: return glm::vec3(0.094118, 0.094118, 0.105882);
        case 950: return glm::vec3(0.035294, 0.035294, 0.043137);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 neutral(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.980392, 0.980392, 0.980392);
        case 100: return glm::vec3(0.960784, 0.960784, 0.960784);
        case 200: return glm::vec3(0.898039, 0.898039, 0.898039);
        case 300: return glm::vec3(0.831373, 0.831373, 0.831373);
        case 400: return glm::vec3(0.639216, 0.639216, 0.639216);
        case 500: return glm::vec3(0.450980, 0.450980, 0.450980);
        case 600: return glm::vec3(0.321569, 0.321569, 0.321569);
        case 700: return glm::vec3(0.250980, 0.250980, 0.250980);
        case 800: return glm::vec3(0.149020, 0.149020, 0.149020);
        case 900: return glm::vec3(0.090196, 0.090196, 0.090196);
        case 950: return glm::vec3(0.039216, 0.039216, 0.039216);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 stone(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.980392, 0.980392, 0.976471);
        case 100: return glm::vec3(0.960784, 0.960784, 0.956863);
        case 200: return glm::vec3(0.905882, 0.898039, 0.894118);
        case 300: return glm::vec3(0.839216, 0.827451, 0.819608);
        case 400: return glm::vec3(0.658824, 0.635294, 0.619608);
        case 500: return glm::vec3(0.470588, 0.443137, 0.423529);
        case 600: return glm::vec3(0.341176, 0.325490, 0.305882);
        case 700: return glm::vec3(0.266667, 0.250980, 0.235294);
        case 800: return glm::vec3(0.160784, 0.145098, 0.141176);
        case 900: return glm::vec3(0.109804, 0.098039, 0.090196);
        case 950: return glm::vec3(0.047059, 0.039216, 0.035294);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 red(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.996078, 0.949020, 0.949020);
        case 100: return glm::vec3(0.996078, 0.886275, 0.886275);
        case 200: return glm::vec3(0.996078, 0.792157, 0.792157);
        case 300: return glm::vec3(0.988235, 0.647059, 0.647059);
        case 400: return glm::vec3(0.972549, 0.443137, 0.443137);
        case 500: return glm::vec3(0.937255, 0.266667, 0.266667);
        case 600: return glm::vec3(0.862745, 0.149020, 0.149020);
        case 700: return glm::vec3(0.725490, 0.109804, 0.109804);
        case 800: return glm::vec3(0.600000, 0.105882, 0.105882);
        case 900: return glm::vec3(0.498039, 0.113725, 0.113725);
        case 950: return glm::vec3(0.270588, 0.039216, 0.039216);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 orange(int shade) {
    switch (shade) {
        case 50: return glm::vec3(1.000000, 0.968627, 0.929412);
        case 100: return glm::vec3(1.000000, 0.929412, 0.835294);
        case 200: return glm::vec3(0.996078, 0.843137, 0.666667);
        case 300: return glm::vec3(0.992157, 0.729412, 0.454902);
        case 400: return glm::vec3(0.984314, 0.572549, 0.235294);
        case 500: return glm::vec3(0.976471, 0.450980, 0.086275);
        case 600: return glm::vec3(0.917647, 0.345098, 0.047059);
        case 700: return glm::vec3(0.760784, 0.254902, 0.047059);
        case 800: return glm::vec3(0.603922, 0.203922, 0.070588);
        case 900: return glm::vec3(0.486275, 0.176471, 0.070588);
        case 950: return glm::vec3(0.262745, 0.078431, 0.027451);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 amber(int shade) {
    switch (shade) {
        case 50: return glm::vec3(1.000000, 0.984314, 0.921569);
        case 100: return glm::vec3(0.996078, 0.952941, 0.780392);
        case 200: return glm::vec3(0.992157, 0.901961, 0.541176);
        case 300: return glm::vec3(0.988235, 0.827451, 0.301961);
        case 400: return glm::vec3(0.984314, 0.749020, 0.141176);
        case 500: return glm::vec3(0.960784, 0.619608, 0.043137);
        case 600: return glm::vec3(0.850980, 0.466667, 0.023529);
        case 700: return glm::vec3(0.705882, 0.325490, 0.035294);
        case 800: return glm::vec3(0.572549, 0.250980, 0.054902);
        case 900: return glm::vec3(0.470588, 0.207843, 0.058824);
        case 950: return glm::vec3(0.270588, 0.101961, 0.011765);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 yellow(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.996078, 0.988235, 0.909804);
        case 100: return glm::vec3(0.996078, 0.976471, 0.764706);
        case 200: return glm::vec3(0.996078, 0.941176, 0.541176);
        case 300: return glm::vec3(0.992157, 0.878431, 0.278431);
        case 400: return glm::vec3(0.980392, 0.800000, 0.082353);
        case 500: return glm::vec3(0.917647, 0.701961, 0.031373);
        case 600: return glm::vec3(0.792157, 0.541176, 0.015686);
        case 700: return glm::vec3(0.631373, 0.384314, 0.027451);
        case 800: return glm::vec3(0.521569, 0.301961, 0.054902);
        case 900: return glm::vec3(0.443137, 0.247059, 0.070588);
        case 950: return glm::vec3(0.258824, 0.125490, 0.023529);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 lime(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.968627, 0.996078, 0.905882);
        case 100: return glm::vec3(0.925490, 0.988235, 0.796078);
        case 200: return glm::vec3(0.850980, 0.976471, 0.615686);
        case 300: return glm::vec3(0.745098, 0.949020, 0.392157);
        case 400: return glm::vec3(0.639216, 0.901961, 0.207843);
        case 500: return glm::vec3(0.517647, 0.800000, 0.086275);
        case 600: return glm::vec3(0.396078, 0.639216, 0.050980);
        case 700: return glm::vec3(0.301961, 0.486275, 0.058824);
        case 800: return glm::vec3(0.247059, 0.384314, 0.070588);
        case 900: return glm::vec3(0.211765, 0.325490, 0.078431);
        case 950: return glm::vec3(0.101961, 0.180392, 0.019608);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 green(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.941176, 0.992157, 0.956863);
        case 100: return glm::vec3(0.862745, 0.988235, 0.905882);
        case 200: return glm::vec3(0.733333, 0.968627, 0.815686);
        case 300: return glm::vec3(0.525490, 0.937255, 0.674510);
        case 400: return glm::vec3(0.290196, 0.870588, 0.501961);
        case 500: return glm::vec3(0.133333, 0.772549, 0.368627);
        case 600: return glm::vec3(0.086275, 0.639216, 0.290196);
        case 700: return glm::vec3(0.082353, 0.501961, 0.239216);
        case 800: return glm::vec3(0.086275, 0.396078, 0.203922);
        case 900: return glm::vec3(0.078431, 0.325490, 0.176471);
        case 950: return glm::vec3(0.019608, 0.180392, 0.086275);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 emerald(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.925490, 0.992157, 0.960784);
        case 100: return glm::vec3(0.819608, 0.980392, 0.898039);
        case 200: return glm::vec3(0.654902, 0.952941, 0.815686);
        case 300: return glm::vec3(0.431373, 0.905882, 0.717647);
        case 400: return glm::vec3(0.203922, 0.827451, 0.600000);
        case 500: return glm::vec3(0.062745, 0.725490, 0.505882);
        case 600: return glm::vec3(0.019608, 0.588235, 0.411765);
        case 700: return glm::vec3(0.015686, 0.470588, 0.341176);
        case 800: return glm::vec3(0.023529, 0.372549, 0.274510);
        case 900: return glm::vec3(0.023529, 0.305882, 0.231373);
        case 950: return glm::vec3(0.007843, 0.172549, 0.133333);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 teal(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.941176, 0.992157, 0.980392);
        case 100: return glm::vec3(0.800000, 0.984314, 0.945098);
        case 200: return glm::vec3(0.600000, 0.964706, 0.894118);
        case 300: return glm::vec3(0.368627, 0.917647, 0.831373);
        case 400: return glm::vec3(0.176471, 0.831373, 0.749020);
        case 500: return glm::vec3(0.078431, 0.721569, 0.650980);
        case 600: return glm::vec3(0.050980, 0.580392, 0.533333);
        case 700: return glm::vec3(0.058824, 0.462745, 0.431373);
        case 800: return glm::vec3(0.066667, 0.368627, 0.349020);
        case 900: return glm::vec3(0.074510, 0.305882, 0.290196);
        case 950: return glm::vec3(0.015686, 0.184314, 0.180392);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 cyan(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.925490, 0.996078, 1.000000);
        case 100: return glm::vec3(0.811765, 0.980392, 0.996078);
        case 200: return glm::vec3(0.647059, 0.952941, 0.988235);
        case 300: return glm::vec3(0.403922, 0.909804, 0.976471);
        case 400: return glm::vec3(0.133333, 0.827451, 0.933333);
        case 500: return glm::vec3(0.023529, 0.713725, 0.831373);
        case 600: return glm::vec3(0.031373, 0.568627, 0.698039);
        case 700: return glm::vec3(0.054902, 0.454902, 0.564706);
        case 800: return glm::vec3(0.082353, 0.368627, 0.458824);
        case 900: return glm::vec3(0.086275, 0.305882, 0.388235);
        case 950: return glm::vec3(0.031373, 0.200000, 0.266667);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 sky(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.941176, 0.976471, 1.000000);
        case 100: return glm::vec3(0.878431, 0.949020, 0.996078);
        case 200: return glm::vec3(0.729412, 0.901961, 0.992157);
        case 300: return glm::vec3(0.490196, 0.827451, 0.988235);
        case 400: return glm::vec3(0.219608, 0.741176, 0.972549);
        case 500: return glm::vec3(0.054902, 0.647059, 0.913725);
        case 600: return glm::vec3(0.007843, 0.517647, 0.780392);
        case 700: return glm::vec3(0.011765, 0.411765, 0.631373);
        case 800: return glm::vec3(0.027451, 0.349020, 0.521569);
        case 900: return glm::vec3(0.047059, 0.290196, 0.431373);
        case 950: return glm::vec3(0.031373, 0.184314, 0.286275);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 blue(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.937255, 0.964706, 1.000000);
        case 100: return glm::vec3(0.858824, 0.917647, 0.996078);
        case 200: return glm::vec3(0.749020, 0.858824, 0.996078);
        case 300: return glm::vec3(0.576471, 0.772549, 0.992157);
        case 400: return glm::vec3(0.376471, 0.647059, 0.980392);
        case 500: return glm::vec3(0.231373, 0.509804, 0.964706);
        case 600: return glm::vec3(0.145098, 0.388235, 0.921569);
        case 700: return glm::vec3(0.113725, 0.305882, 0.847059);
        case 800: return glm::vec3(0.117647, 0.250980, 0.686275);
        case 900: return glm::vec3(0.117647, 0.227451, 0.541176);
        case 950: return glm::vec3(0.090196, 0.145098, 0.329412);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 indigo(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.933333, 0.949020, 1.000000);
        case 100: return glm::vec3(0.878431, 0.905882, 1.000000);
        case 200: return glm::vec3(0.780392, 0.823529, 0.996078);
        case 300: return glm::vec3(0.647059, 0.705882, 0.988235);
        case 400: return glm::vec3(0.505882, 0.549020, 0.972549);
        case 500: return glm::vec3(0.388235, 0.400000, 0.945098);
        case 600: return glm::vec3(0.309804, 0.274510, 0.898039);
        case 700: return glm::vec3(0.262745, 0.219608, 0.792157);
        case 800: return glm::vec3(0.215686, 0.188235, 0.639216);
        case 900: return glm::vec3(0.192157, 0.180392, 0.505882);
        case 950: return glm::vec3(0.117647, 0.105882, 0.294118);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 violet(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.960784, 0.952941, 1.000000);
        case 100: return glm::vec3(0.929412, 0.913725, 0.996078);
        case 200: return glm::vec3(0.866667, 0.839216, 0.996078);
        case 300: return glm::vec3(0.768627, 0.709804, 0.992157);
        case 400: return glm::vec3(0.654902, 0.545098, 0.980392);
        case 500: return glm::vec3(0.545098, 0.360784, 0.964706);
        case 600: return glm::vec3(0.486275, 0.227451, 0.929412);
        case 700: return glm::vec3(0.427451, 0.156863, 0.850980);
        case 800: return glm::vec3(0.356863, 0.129412, 0.713725);
        case 900: return glm::vec3(0.298039, 0.113725, 0.584314);
        case 950: return glm::vec3(0.180392, 0.062745, 0.396078);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 purple(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.980392, 0.960784, 1.000000);
        case 100: return glm::vec3(0.952941, 0.909804, 1.000000);
        case 200: return glm::vec3(0.913725, 0.835294, 1.000000);
        case 300: return glm::vec3(0.847059, 0.705882, 0.996078);
        case 400: return glm::vec3(0.752941, 0.517647, 0.988235);
        case 500: return glm::vec3(0.658824, 0.333333, 0.968627);
        case 600: return glm::vec3(0.576471, 0.200000, 0.917647);
        case 700: return glm::vec3(0.494118, 0.133333, 0.807843);
        case 800: return glm::vec3(0.419608, 0.129412, 0.658824);
        case 900: return glm::vec3(0.345098, 0.109804, 0.529412);
        case 950: return glm::vec3(0.231373, 0.027451, 0.392157);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 fuchsia(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.992157, 0.956863, 1.000000);
        case 100: return glm::vec3(0.980392, 0.909804, 1.000000);
        case 200: return glm::vec3(0.960784, 0.815686, 0.996078);
        case 300: return glm::vec3(0.941176, 0.670588, 0.988235);
        case 400: return glm::vec3(0.909804, 0.474510, 0.976471);
        case 500: return glm::vec3(0.850980, 0.274510, 0.937255);
        case 600: return glm::vec3(0.752941, 0.149020, 0.827451);
        case 700: return glm::vec3(0.635294, 0.109804, 0.686275);
        case 800: return glm::vec3(0.525490, 0.098039, 0.560784);
        case 900: return glm::vec3(0.439216, 0.101961, 0.458824);
        case 950: return glm::vec3(0.290196, 0.015686, 0.305882);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 pink(int shade) {
    switch (shade) {
        case 50: return glm::vec3(0.992157, 0.949020, 0.972549);
        case 100: return glm::vec3(0.988235, 0.905882, 0.952941);
        case 200: return glm::vec3(0.984314, 0.811765, 0.909804);
        case 300: return glm::vec3(0.976471, 0.658824, 0.831373);
        case 400: return glm::vec3(0.956863, 0.447059, 0.713725);
        case 500: return glm::vec3(0.925490, 0.282353, 0.600000);
        case 600: return glm::vec3(0.858824, 0.152941, 0.466667);
        case 700: return glm::vec3(0.745098, 0.094118, 0.364706);
        case 800: return glm::vec3(0.615686, 0.090196, 0.301961);
        case 900: return glm::vec3(0.513725, 0.094118, 0.262745);
        case 950: return glm::vec3(0.313725, 0.027451, 0.141176);
        default: throw std::out_of_range("shade not found");
    }
}

constexpr glm::vec3 rose(int shade) {
    switch (shade) {
        case 50: return glm::vec3(1.000000, 0.945098, 0.949020);
        case 100: return glm::vec3(1.000000, 0.894118, 0.901961);
        case 200: return glm::vec3(0.996078, 0.803922, 0.827451);
        case 300: return glm::vec3(0.992157, 0.643137, 0.686275);
        case 400: return glm::vec3(0.984314, 0.443137, 0.521569);
        case 500: return glm::vec3(0.956863, 0.247059, 0.368627);
        case 600: return glm::vec3(0.882353, 0.113725, 0.282353);
        case 700: return glm::vec3(0.745098, 0.070588, 0.235294);
        case 800: return glm::vec3(0.623529, 0.070588, 0.223529);
        case 900: return glm::vec3(0.533333, 0.074510, 0.215686);
        case 950: return glm::vec3(0.298039, 0.019608, 0.098039);
        default: throw std::out_of_range("shade not found");
    }
}