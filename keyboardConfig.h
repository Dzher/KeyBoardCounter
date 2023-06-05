#include <array>

#ifndef _KEYBOARDCOUNTERCONFIG_H_
#define _KEYBOARDCOUNTERCONFIG_H_

namespace kbcConfig
{
    class keyboardConfig
    {
    public:
        static constexpr std::array kUpperLetterArray = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        static constexpr std::array kLowerLetterArray = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        // static constexpr std::array k
        static constexpr int kLetterTypeNum = 26;
        static constexpr int kControlTypeNum = 6;
        static constexpr int kLocateTypeNum = 8;
        static constexpr int kSpaceTypeNum = 1;
        static constexpr int kDeleteTypeNum = 2;
    };
}

#endif //_KEYBOARDCOUNTERCONFIG_H_