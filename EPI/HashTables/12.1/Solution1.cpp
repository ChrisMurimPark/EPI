//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 3/10/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"

#include <unordered_map>

namespace S1
{
    
// N = number of characters in string s
// C = number of unique characters in string s
// time: O(N)
// space: O(C)
bool HasPalindromicPermutation(const std::string &s)
{
    if (s.empty())
        return false;
    std::unordered_map<char, int> m;
    for (char c : s)
    {
        const auto itr = m.find(c);
        if (itr != m.end())
            itr->second++;
        else
            m.insert({c, 1});
    }
    short odd_counter = 0;
    for (std::pair<char, int> e : m)
    {
        if (e.second % 2 != 0)
        {
            odd_counter++;
            if (odd_counter > 1)
                return false;
        }
    }
    return true;
}
    
} // namespace S1
