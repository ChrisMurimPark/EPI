//
//  Solution3.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 2/3/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//
// N = elements in array
// time: O(N)
// space: O(1)

#include "Solution3.hpp"
#include <utility>

namespace S3
{

void DutchFlagPartition(std::array<int, 10> &arr, const size_t pivot_index)
{
    const int pivot = arr[pivot_index];
    size_t left = 0, mid = 0, right = arr.size();
    while (mid < right)
    {
        if (arr[mid] < pivot)
            std::swap(arr[left++], arr[mid++]);
        else if (arr[mid] == pivot)
            ++mid;
        else
        std::swap(arr[mid], arr[--right]);
    }
}
    
} // namespace S3
