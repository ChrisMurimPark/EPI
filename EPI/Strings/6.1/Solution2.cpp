//
//  Solution2.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 2/11/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution2.hpp"

// Key insights
//   - You can convert from int to char and char to int by adding/subtracting '0'
//   - You can get the least significant digit of a number by taking the number % 10 (e.g. 143 % 10 = 3)
//   - You can get the remaining part of the number with number / 10 (e.g. 143 / 10 = 14)
//   - Compared to prepending chars, it is more efficient to append and reverse at the end

namespace S2
{

// N = length of string
// time: O(N)
// space: O(1)
int Convert(const std::string &s)
{
    const bool is_neg = s.at(0) == '-';
    int to_return = 0;
    for (size_t i = is_neg ? 1 : 0, n = s.size(); i < n; ++i)
    {
        const int d = s.at(i) - '0';
        to_return = to_return * 10 + d;
    }
    return is_neg ? -to_return : to_return;
}

// N = number of digits in i
// time: O(N)
// space: technically O(N) to create string
std::string Convert(int i)
{
    std::string s;
    const bool is_neg = i < 0;
    do
    {
        s.push_back(abs(i % 10) + '0');
        i /= 10;
    } while (i);
    if (is_neg)
        s.push_back('-');
    return {s.rbegin(), s.rend()};
}
    
} // namespace S2
