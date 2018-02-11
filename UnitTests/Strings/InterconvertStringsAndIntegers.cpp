//
//  InterconvertStringsAndIntegers.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 2/11/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/Strings/InterconvertStringsAndIntegers/Solution1.hpp"

TEST(InterconvertStringsAndIntegersTests, ConvertStringToInteger_GivenPositiveNumber_ReturnsCorrectValue)
{
    EXPECT_EQ(23, S1::Convert("23"));
}

TEST(InterconvertStringsAndIntegersTests, ConvertStringToInteger_GivenNegativeNumber_ReturnsCorrectValue)
{
    EXPECT_EQ(-40, S1::Convert("-40"));
}

TEST(InterconvertStringsAndIntegersTests, ConvertIntegerToString_GivenPositiveNumber_ReturnsCorrectValue)
{
    EXPECT_EQ("932", S1::Convert(932));
}

TEST(InterconvertStringsAndIntegersTests, ConvertIntegerToString_GivenNegativeNumber_ReturnsCorrectValue)
{
    EXPECT_EQ("-791", S1::Convert(-791));
}
