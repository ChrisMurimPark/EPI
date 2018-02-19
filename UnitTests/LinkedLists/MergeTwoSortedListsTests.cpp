//
//  MergeTwoSortedListsTests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 2/19/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/LinkedLists/MergeTwoSortedLists/Solution1.hpp"
#include "../../EPI/LinkedLists/ListNodeUtils.hpp"

void ExpectEqual(ListNodeIntPtr result, const std::vector<const int> &expected_result)
{
    for (const int i : expected_result)
    {
        EXPECT_EQ(result->value, i);
        result = result->next;
    }
}

TEST(MergeTwoSortedListsTests, Merge_WithEmptyLists_ReturnsNull)
{
    ListNodeIntPtr L1, L2;
    
    auto result = S1::MergeSortedLists(L1, L2);
    EXPECT_EQ(nullptr, result);
}

TEST(MergeTwoSortedListsTests, Merge_WithEmptyL1_ReturnsCorrectList)
{
    ListNodeIntPtr L1 = VectorToList<int>({2, 5, 7});
    ListNodeIntPtr L2;
    
    std::vector<const int> expected_result = {2, 5, 7};
    auto result = S1::MergeSortedLists(L1, L2);
    ExpectEqual(result, expected_result);
}

TEST(MergeTwoSortedListsTests, Merge_WithEmptyL2_ReturnsCorrectList)
{
    ListNodeIntPtr L1;
    ListNodeIntPtr L2 = VectorToList<int>({2, 5, 7});
    
    std::vector<const int> expected_result = {2, 5, 7};
    auto result = S1::MergeSortedLists(L1, L2);
    ExpectEqual(result, expected_result);
}

TEST(MergeTwoSortedListsTests, Merge_StandardLists_ReturnsCorrectList)
{
    ListNodeIntPtr L1 = VectorToList<int>({2, 5, 7});
    ListNodeIntPtr L2 = VectorToList<int>({3, 11});

    std::vector<const int> expected_result = {2, 3, 5, 7, 11};
    auto result = S1::MergeSortedLists(L1, L2);
    ExpectEqual(result, expected_result);
}
