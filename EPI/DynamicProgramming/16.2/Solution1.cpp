//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 8/5/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"

namespace S1
{
    
int minimum(int a, int b)
{
    return a < b ? a : b;
}
    
int LevenshteinDistance(const std::string &lhs, const std::string &rhs, const int left_prefix, const int right_prefix, const std::vector<std::vector<int>> &t)
{
    if (left_prefix < 0 && right_prefix < 0)
        return 0;
    if (left_prefix < 0)
        return right_prefix + 1;
    if (right_prefix < 0)
        return left_prefix + 1;

    if (t[left_prefix][right_prefix] != -1)
        return t[left_prefix][right_prefix];
    
    if (lhs[left_prefix] == rhs[right_prefix])
        return LevenshteinDistance(lhs, rhs, left_prefix - 1, right_prefix - 1, t);
    else
    {
        int to_return = INT_MAX;
        to_return = minimum(to_return, LevenshteinDistance(lhs, rhs, left_prefix - 1, right_prefix - 1, t)); // sub last char
        to_return = minimum(to_return, LevenshteinDistance(lhs, rhs, left_prefix - 1, right_prefix, t)); // delete last char of lhs
        to_return = minimum(to_return, LevenshteinDistance(lhs, rhs, left_prefix, right_prefix - 1, t)); // add last char of rhs
        return to_return + 1;
    }
}
    
int LevenshteinDistance(const std::string &lhs, const std::string &rhs)
{
    std::vector<std::vector<int>> distances(lhs.size(), std::vector<int>(rhs.size(), -1));
    for (int i = 0, n = (int) lhs.size(); i < n; ++i)
    {
        for (int j = 0, m = (int) rhs.size(); j < m; ++j)
        {
            distances[i][j] = LevenshteinDistance(lhs, rhs, i, j, distances);
        }
    }
    return distances[lhs.size() - 1][rhs.size() - 1];
}
    
} // namespace S1

