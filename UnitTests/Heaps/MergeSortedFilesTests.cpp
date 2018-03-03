//
//  MergeSortedFiles.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 3/3/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/Heaps/MergeSortedFiles/Solution1.hpp"

TEST(MergeSortedFilesTests, Merge_GivenProperInputs_ReturnsCorrectResult)
{
    const std::vector<const std::vector<int>> input = {
        {1, 3, 3, 5, 7, 20},
        {0, 3, 6, 9, 10},
        {-50, 4, 6, 10}
    };
    const std::vector<int> expected_result = {-50, 0, 1, 3, 3, 3, 4, 5, 6, 6, 7, 9, 10, 10, 20};
    const std::vector<int> actual_result = S1::MergeSortedVectors(input);
    ASSERT_EQ(expected_result.size(), actual_result.size());
    for (size_t i = 0, n = expected_result.size(); i < n; ++i)
    {
        EXPECT_EQ(expected_result[i], actual_result[i]);
    }
}

TEST(MergeSortedFilesTests, Merge_GivenEmptyInputs_ReturnsEmptyResult)
{
    EXPECT_EQ(std::vector<int>(), S1::MergeSortedVectors({}));
}
