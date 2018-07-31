//
//  SortedIntersectionTests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 3/16/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/Sorting/13.1/Solution1.hpp"

TEST(SortedIntersectionTests, CalculateSortedIntersection_GivenNoDuplicates_ReturnsCorrectResults)
{
    const std::vector<int> a = {1, 3, 5, 7, 8, 9};
    const std::vector<int> b = {3, 6, 9, 10};
    const std::vector<int> expected_intersection = {3, 9};
    const size_t expected_size = expected_intersection.size();
    
    const std::vector<int> actual_intersection = S1::CalculateSortedIntersection(a, b);
    ASSERT_EQ(expected_size, actual_intersection.size());
    for (int i = 0; i < expected_size; ++i)
        EXPECT_EQ(expected_intersection[i], actual_intersection[i]);
}

TEST(SortedIntersectionTests, CalculateSortedIntersection_GivenDuplicates_ReturnsCorrectResults)
{
    const std::vector<int> a = {1, 3, 3, 5, 7, 8, 8, 10};
    const std::vector<int> b = {3, 3, 6, 9, 10};
    const std::vector<int> expected_intersection = {3, 10};
    const size_t expected_size = expected_intersection.size();
    
    const std::vector<int> actual_intersection = S1::CalculateSortedIntersection(a, b);
    ASSERT_EQ(expected_size, actual_intersection.size());
    for (int i = 0; i < expected_size; ++i)
        EXPECT_EQ(expected_intersection[i], actual_intersection[i]);
}

TEST(SortedIntersectionTests, CalculateSortedIntersection_GivenEmptyFirstInput_ReturnsCorrectResults)
{
    const std::vector<int> a = {};
    const std::vector<int> b = {1, 3, 3, 5, 7, 8, 8, 10};
    const std::vector<int> actual_intersection = S1::CalculateSortedIntersection(a, b);
    EXPECT_EQ(0, actual_intersection.size());
}

TEST(SortedIntersectionTests, CalculateSortedIntersection_GivenEmptySecondInput_ReturnsCorrectResults)
{
    const std::vector<int> a = {1, 3, 3, 5, 7, 8, 8, 10};
    const std::vector<int> b = {};
    const std::vector<int> actual_intersection = S1::CalculateSortedIntersection(a, b);
    EXPECT_EQ(0, actual_intersection.size());
}

TEST(SortedIntersectionTests, CalculateSortedIntersection_GivenEmptyInputs_ReturnsCorrectResults)
{
    const std::vector<int> a = {};
    const std::vector<int> b = {};
    const std::vector<int> actual_intersection = S1::CalculateSortedIntersection(a, b);
    EXPECT_EQ(0, actual_intersection.size());
}
