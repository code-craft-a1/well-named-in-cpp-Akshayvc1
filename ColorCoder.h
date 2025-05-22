#pragma once
#include "ColorEnums.h"
#include "ColorPair.h"

namespace TelCoColorCoder {

    ColorPair GetColorFromPairNumber(int pairNumber);

    int GetPairNumberFromColor(MajorColor major, MinorColor minor);

    void PrintColorCodingReference();
}
