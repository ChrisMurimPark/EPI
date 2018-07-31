//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 3/3/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"

#include <queue>

namespace S1
{
    
struct Element
{
    bool operator>(const Element &other)
    {
        return *current > *other.current;
    }
    
    std::vector<int>::const_iterator current;
    std::vector<int>::const_iterator end;
};
    
// N = total number of elements
// K = number of vector<int>s (files)
// time: O(N log K)
// space: O(K) for min_heap (not counting result vector)
std::vector<int> MergeSortedVectors(const std::vector<const std::vector<int>> &inputs)
{
    std::priority_queue<Element, std::vector<Element>, std::greater<>> min_heap;
    for (size_t i = 0, n = inputs.size(); i < n; ++i)
        min_heap.push(Element{inputs[i].begin(), inputs[i].end()});
    
    std::vector<int> result;
    while (!min_heap.empty())
    {
        const Element e = min_heap.top();
        min_heap.pop();
        result.push_back(*e.current);
        if (std::next(e.current) != e.end)
            min_heap.emplace(Element{std::next(e.current), e.end});
    }
    return result;
}
    
} // namespace S1
