//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 2/11/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"
#include <unordered_map>

namespace S1
{

// N = length of string
// time: O(N)
// space: O(1)
int Convert(const std::string &s)
{
    const static std::unordered_map<char, int> INT_MAP
    ({
        {'1', 1},
        {'2', 2},
        {'3', 3},
        {'4', 4},
        {'5', 5},
        {'6', 6},
        {'7', 7},
        {'8', 8},
        {'9', 9},
        {'0', 0}
    });
    int to_return = 0;
    const bool is_neg = s[0] == '-';
    unsigned int mult = 1;
    const size_t first_index = is_neg ? 1 : 0;
    for (size_t i = s.size() - 1; ; --i)
    {
        to_return += (INT_MAP.at(s[i]) * mult);
        mult *= 10;
        if (i == first_index)
            break;
    }
    return is_neg ? -to_return : to_return;
}
    
// N = digits in i
// time: O(N)
// space: technically O(N) for new string
std::string Convert(const int &i)
{
    const static std::string CHARS = "0123456789";
    int divisor = 1;
    int i_copy = abs(i);
    while (i_copy > 9)
    {
        i_copy /= 10;
        divisor *= 10;
    }
    std::string s;
    if (i < 0)
        s.push_back('-');
    i_copy = abs(i);
    
    do
    {
        int digit = i_copy / divisor;
        s.push_back(CHARS.at(digit));
        i_copy -= (digit * divisor);
        divisor /= 10;
    } while (i_copy != 0);
    return s;
}

} // namespace S1
