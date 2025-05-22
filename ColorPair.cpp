#include "ColorPair.h"
#include "ColorEnums.h"

TelCoColorCoder::ColorPair::ColorPair(MajorColor major, MinorColor minor)
    : majorColor(major), minorColor(minor) {}

TelCoColorCoder::MajorColor TelCoColorCoder::ColorPair::getMajor() const {
    return majorColor;
}

TelCoColorCoder::MinorColor TelCoColorCoder::ColorPair::getMinor() const {
    return minorColor;
}

std::string TelCoColorCoder::ColorPair::ToString() const {
    return std::string(MajorColorNames[majorColor]) + " " + MinorColorNames[minorColor];
}
