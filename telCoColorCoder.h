#ifndef TELCOCOLORCODER_H
#define TELCOCOLORCODER_H

#include "colorPair.h"

namespace TelCoColorCoder {
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    void PrintColorManual();
}

#endif
