//
//  Solution3.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 1/20/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//
// K = bit word length (in this case 64)
// N = number of numbers to take parity of (length of vector)
// time: O(N log(K))
// space: O(1)

#include "Solution3.hpp"

namespace S3
{

short Parity(unsigned long long number)
{
    number ^= number >> 32;
    number ^= number >> 16;
    number ^= number >> 8;
    number ^= number >> 4;
    number ^= number >> 2;
    number ^= number >> 1;
    return number & 1;
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

} // namespace S3
