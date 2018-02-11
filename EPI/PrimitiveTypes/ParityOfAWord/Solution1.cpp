//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 1/20/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//
// K = bit word length (in this case 64)
// N = number of numbers to take parity of (length of vector)
// time: O(NK)
// space: O(1)

#include "Solution1.hpp"

namespace S1
{

short Parity(unsigned long long number)
{
    short parity = 0;
    while (number)
    {
        parity ^= (number & 1);
        number >>= 1;
    }
    return parity;
}

short Parity(const std::vector<unsigned long long> &numbers)
{
    short parity = 0;
    for (auto itr = numbers.cbegin(), end = numbers.cend(); itr != end; ++itr)
    {
        parity ^= Parity(*itr);
    }
    return parity;
}

} // namespace S1
