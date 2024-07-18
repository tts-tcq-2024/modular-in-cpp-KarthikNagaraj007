#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

#include <string>
#include "telCoColorCoder.h"  // Include the main header file for enums and constants

namespace TelCoColorCoder {
    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor);
            MajorColor getMajor();
            MinorColor getMinor();
            std::string ToString();
    };
}

#endif // COLOR_PAIR_H
