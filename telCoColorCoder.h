#ifndef COLOR_CODER_H
#define COLOR_CODER_H

#include <string>
#include "ColorPair.h"  // Include the new ColorPair header

namespace TelCoColorCoder {
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* MajorColorNames[];
    extern int numberOfMajorColors;
    extern const char* MinorColorNames[];
    extern int numberOfMinorColors;

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}

#endif // COLOR_CODER_H
