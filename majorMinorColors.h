#ifndef MAJORMINORCOLORS_H
#define MAJORMINORCOLORS_H

namespace TelCoColorCoder {
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];
    extern int numberOfMajorColors;
    extern int numberOfMinorColors;
}

#endif
