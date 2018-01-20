//
//  Solution2.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 1/20/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"
#include "Solution2.hpp"
#include <cmath>

namespace S2
{
    // K = bit word length (in this case 64)
    // L = section length (in this case 16)
    // N = number of numbers to take parity of (length of vector)

    // time: O(2^L * K) + O(N * K/L)
    // space: O(1) ~130KB
    
    std::array<short, USHRT_MAX> ParityCalculator::m_parities = std::array<short, USHRT_MAX>();
    
    ParityCalculator::ParityCalculator()
    {
        PrepopulateParities();
    }
    
    short ParityCalculator::Parity(unsigned long long number)
    {
        short parity = 0;
        const int mask_size = 16;
        const int bit_mask = 0xFFFF;
        while (number)
        {
            parity ^= m_parities[number & bit_mask]; // last 4 bits
            number >>= mask_size;
        }
        return parity;
    }
    
    short ParityCalculator::Parity(const std::vector<unsigned long long> &numbers)
    {
        short parity = 0;
        for (auto itr = numbers.cbegin(), end = numbers.cend(); itr != end; ++itr)
        {
            parity ^= Parity(*itr);
        }
        return parity;
    }
    
    void ParityCalculator::PrepopulateParities()
    {
        for (unsigned short i = 0; i < USHRT_MAX; ++i)
            m_parities[i] = S1::Parity(i);
    }
    
} // namespace S2
