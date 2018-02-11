//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 2/3/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//
// N = elements in array
// time: O(3N)
// space: O(N)

#include "Solution1.hpp"

namespace S1
{

void DutchFlagPartition(std::array<int, 10> &arr, const size_t pivot_index)
{
    const int pivot = arr[pivot_index];
    std::array<int, 10> temp_arr;
    
    size_t temp_arr_index = 0;
    for (int e : arr)
    {
        if (e < pivot)
            temp_arr[temp_arr_index++] = e;
    }
    for (int e : arr)
    {
        if (e == pivot)
            temp_arr[temp_arr_index++] = e;
    }
    for (int e : arr)
    {
        if (e > pivot)
            temp_arr[temp_arr_index++] = e;
    }
    arr = temp_arr;
}

} // namespace S1
