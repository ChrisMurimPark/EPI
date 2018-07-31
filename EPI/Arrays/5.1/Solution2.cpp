//
//  Solution2.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 2/3/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//
// N = elements in array
// time: O(2N)
// space: O(1)

#include "Solution2.hpp"

namespace S2
{

void swap(std::array<int, 10> &arr, const size_t i, const size_t j)
{
    arr[i] = arr[i] ^ arr[j];
    arr[j] = arr[i] ^ arr[j];
    arr[i] = arr[i] ^ arr[j];
}

void DutchFlagPartition(std::array<int, 10> &arr, const size_t pivot_index)
{
    const size_t pivot = arr[pivot_index];
    size_t left = 0;
    size_t mid = 0;
    size_t right = 0;
    
    // determine first position of mid and right
    for (int e : arr)
    {
        if (e < pivot)
            ++mid;
        else if (e == pivot)
            ++right;
    }
    right += mid;
    
    const size_t left_end = mid;
    const size_t mid_end = right;
    const size_t right_end = 10;
    for (size_t i = 0, n = arr.size(); i < n; ++i)
    {
        if (arr[left] < pivot && left < left_end)
            ++left;
        else if (arr[left] > pivot && right < right_end)
            swap(arr, left, right++);
        else if (mid < mid_end)
            swap(arr, left, mid++);
    }
}

} // namespace S2
