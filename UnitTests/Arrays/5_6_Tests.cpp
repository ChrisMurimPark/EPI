//
//  BuyAndSellAStockOnceTests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 2/11/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/Arrays/5.6/Solution1.hpp"

TEST(BuyAndSellAStockOnceTests, GivenPricesWhereNoProfitAchievable_ReturnsZero)
{
    const std::vector<unsigned int> prices = {100, 90, 80};
    const unsigned int max_profit = S1::ComputeMaxProfit(prices);
    EXPECT_EQ(0, max_profit);
}

TEST(BuyAndSellAStockOnceTests, GivenNoPrices_ReturnsZero)
{
    const std::vector<unsigned int> prices = {};
    const unsigned int max_profit = S1::ComputeMaxProfit(prices);
    EXPECT_EQ(0, max_profit);
}

TEST(BuyAndSellAStockOnceTests,
     GivenPricesWhereHighestAndLowestNotUsedInMaxProfit_ReturnsCorrectProfit)
{
    const std::vector<unsigned int> prices = {300, 250, 270, 200};
    const unsigned int max_profit = S1::ComputeMaxProfit(prices);
    EXPECT_EQ(20, max_profit);
}

TEST(BuyAndSellAStockOnceTests, GivenPrices_ReturnsCorrectProfit)
{
    const std::vector<unsigned int> prices = {100, 90, 115, 90};
    const unsigned int max_profit = S1::ComputeMaxProfit(prices);
    EXPECT_EQ(25, max_profit);
}
