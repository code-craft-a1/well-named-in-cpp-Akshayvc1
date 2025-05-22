#pragma once
#include "ColorEnums.h"
#include <string>

namespace TelCoColorCoder {

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;

    public:
        ColorPair(MajorColor major, MinorColor minor);

        MajorColor getMajor() const;

        MinorColor getMinor() const;

        std::string ToString() const;
    };
}
