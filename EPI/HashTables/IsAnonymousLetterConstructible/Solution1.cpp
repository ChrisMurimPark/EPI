//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 3/11/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"
#include <unordered_map>

namespace S1
{
    
// L = characters in letter
// M = characters in magazine
// C = unique characters in letter
// time: O(L + M)
// space: O(C)
bool IsAnonymousLetterConstructible(const std::string &letter, const std::string &magazine)
{
    std::unordered_map<char, int> char_count;
    for (char c : letter)
    {
        if (char_count.count(c))
            char_count.at(c)++;
        else
            char_count.insert({c, 1});
    }
    for (char c : magazine)
    {
        if (char_count.count(c))
        {
            if (--char_count.at(c) == 0)
                char_count.erase(c);
            if (char_count.empty())
                return true;
        }
    }
    return char_count.empty();
}

} // namespace S1

