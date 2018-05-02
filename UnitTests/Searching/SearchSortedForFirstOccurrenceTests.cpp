//
//  SearchSortedForFirstOccurrenceTests.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 3/4/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/Searching/SearchSortedForFirstOccurrence/Solution1.hpp"

TEST(SearchSortedForFirstOccurrenceTests, Search_GivenRepeatingElements_ReturnsFirstOccurrence)
{
    std::vector<int> v = {-14, -12, 2, 108, 108, 243, 285, 285};
    const int k = 108;
    const int expected = 3;
    const int actual = S1::GetFirstOccurrence(v, k);
    EXPECT_EQ(expected, actual);
}

TEST(SearchSortedForFirstOccurrenceTests, Search_GivenElementNotFound_ReturnsNegativeOne)
{
    std::vector<int> v = {-14, -12, 2, 108, 108, 243, 285, 285};
    const int k = 109;
    const int expected = -1;
    const int actual = S1::GetFirstOccurrence(v, k);
    EXPECT_EQ(expected, actual);
}
