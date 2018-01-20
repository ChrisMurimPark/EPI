//
//  Solutions.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 1/20/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"

namespace S1
{

// time: O(NK) where N = numbers to take parity of, K = binary word length
// space: O(1)

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
