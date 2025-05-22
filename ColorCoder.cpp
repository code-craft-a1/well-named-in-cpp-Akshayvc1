#include "ColorCoder.h"
#include "ColorEnums.h"
#include <iostream>

namespace TelCoColorCoder {

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return (major * numberOfMinorColors + minor) + 1;
    }

    void PrintColorCodingReference() {
        int pairNumber = 1;
        for (int major = 0; major < numberOfMajorColors; ++major) {
            for (int minor = 0; minor < numberOfMinorColors; ++minor) {
                ColorPair colorPair(static_cast<MajorColor>(major), static_cast<MinorColor>(minor));
                std::cout << "Pair Number: " << pairNumber++ 
                          << " -> " << colorPair.ToString() << std::endl;
            }
        }
    }
}
