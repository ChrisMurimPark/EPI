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
    
    // time: O(K^2) for populating map initially + O(N)
    // space: ~260KB
    
    std::unordered_map<short, short> ParityCalculator::m_parity_map = std::unordered_map<short, short>();
    
    ParityCalculator::ParityCalculator()
    {
        if (m_parity_map.empty())
        {
            PopulateParityMap();
        }
    }
    
    short ParityCalculator::Parity(unsigned long long number)
    {
        short parity = 0;
        while (number)
        {
            parity ^= m_parity_map[number & 15]; // last 4 bits
            number >>= 4;
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
    
    void ParityCalculator::PopulateParityMap()
    {
        const unsigned short capacity = pow(2, 16);
        for (unsigned short i = 0; i < capacity; ++i)
            m_parity_map.insert({i, S1::Parity(i)});
    }
    
} // namespace S2
