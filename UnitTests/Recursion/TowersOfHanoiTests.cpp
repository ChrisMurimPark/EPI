//
//  TowersOfHanoiTests.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 3/25/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/Recursion/TowersOfHanoi/Solution1.hpp"

TEST(TowersOfHanoiTests, GivenThreeAsN_ReturnsCorrectMoves)
{
    std::vector<std::pair<size_t, size_t>> result;
    S1::TowersOfHanoi(3, 0, 1, result);
    
    std::vector<std::pair<size_t, size_t>> expected_result;
    expected_result.emplace_back(std::make_pair(0, 1));
    expected_result.emplace_back(std::make_pair(0, 2));
    expected_result.emplace_back(std::make_pair(1, 2));
    expected_result.emplace_back(std::make_pair(0, 1));
    expected_result.emplace_back(std::make_pair(2, 0));
    expected_result.emplace_back(std::make_pair(2, 1));
    expected_result.emplace_back(std::make_pair(0, 1));
    
    ASSERT_EQ(7, result.size());
    for (size_t i = 0, n = 7; i < n; ++i)
    {
        EXPECT_EQ(expected_result[i].first, result[i].first);
        EXPECT_EQ(expected_result[i].second, result[i].second);
    }
}

TEST(TowersOfHanoiTests, GivenFourAsN_ReturnsCorrectMoves)
{
    std::vector<std::pair<size_t, size_t>> result;
    S1::TowersOfHanoi(4, 0, 1, result);
    
    std::vector<std::pair<size_t, size_t>> expected_result;
    expected_result.emplace_back(std::make_pair(0, 2));
    expected_result.emplace_back(std::make_pair(0, 1));
    expected_result.emplace_back(std::make_pair(2, 1));
    expected_result.emplace_back(std::make_pair(0, 2));
    expected_result.emplace_back(std::make_pair(1, 0));
    expected_result.emplace_back(std::make_pair(1, 2));
    expected_result.emplace_back(std::make_pair(0, 2));
    expected_result.emplace_back(std::make_pair(0, 1));
    expected_result.emplace_back(std::make_pair(2, 1));
    expected_result.emplace_back(std::make_pair(2, 0));
    expected_result.emplace_back(std::make_pair(1, 0));
    expected_result.emplace_back(std::make_pair(2, 1));
    expected_result.emplace_back(std::make_pair(0, 2));
    expected_result.emplace_back(std::make_pair(0, 1));
    expected_result.emplace_back(std::make_pair(2, 1));
    
    ASSERT_EQ(15, result.size());
    for (size_t i = 0, n = 15; i < n; ++i)
    {
        EXPECT_EQ(expected_result[i].first, result[i].first);
        EXPECT_EQ(expected_result[i].second, result[i].second);
    }
}

TEST(TowersOfHanoiTests, GivenZeroAsN_ReturnsEmptyMoves)
{
    std::vector<std::pair<size_t, size_t>> result;
    S1::TowersOfHanoi(0, 0, 1, result);
    EXPECT_EQ(0, result.size());
}

TEST(TowersOfHanoiTests, GivenInvalidPegs_Throws)
{
    std::vector<std::pair<size_t, size_t>> result;
    EXPECT_THROW(S1::TowersOfHanoi(2, 0, 5, result), std::exception);
}
