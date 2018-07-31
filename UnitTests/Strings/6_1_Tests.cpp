//
//  InterconvertStringsAndIntegersTests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 2/11/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/Strings/6.1/Solution1.hpp"
#include "../../EPI/Strings/6.1/Solution2.hpp"

namespace S1
{

TEST(InterconvertStringsAndIntegersTests, S1_ConvertStringToInteger_GivenPositiveNumber)
{
    EXPECT_EQ(23, Convert("23"));
}

TEST(InterconvertStringsAndIntegersTests, S1_ConvertStringToInteger_GivenNegativeNumber)
{
    EXPECT_EQ(-40, Convert("-40"));
}
    
TEST(InterconvertStringsAndIntegersTests, S1_ConvertStringToInteger_GivenZero)
{
    EXPECT_EQ(0, Convert("0"));
}

TEST(InterconvertStringsAndIntegersTests, S1_ConvertIntegerToString_GivenPositiveNumber)
{
    EXPECT_EQ("932", Convert(932));
}

TEST(InterconvertStringsAndIntegersTests, S1_ConvertIntegerToString_GivenNegativeNumber)
{
    EXPECT_EQ("-791", Convert(-791));
}

TEST(InterconvertStringsAndIntegersTests, S1_ConvertIntegerToString_GivenZero)
{
    EXPECT_EQ("0", Convert(0));
}
    
} // namespace S1

namespace S2
{
    
TEST(InterconvertStringsAndIntegersTests, S2_ConvertStringToInteger_GivenPositiveNumber)
{
    EXPECT_EQ(23, Convert("23"));
}

TEST(InterconvertStringsAndIntegersTests, S2_ConvertStringToInteger_GivenNegativeNumber)
{
    EXPECT_EQ(-40, Convert("-40"));
}
    
TEST(InterconvertStringsAndIntegersTests, S2_ConvertStringToInteger_GivenZero)
{
    EXPECT_EQ(0, Convert("0"));
}

TEST(InterconvertStringsAndIntegersTests, S2_ConvertIntegerToString_GivenPositiveNumber)
{
    EXPECT_EQ("932", Convert(932));
}

TEST(InterconvertStringsAndIntegersTests, S2_ConvertIntegerToString_GivenNegativeNumber)
{
    EXPECT_EQ("-791", Convert(-791));
}
    
TEST(InterconvertStringsAndIntegersTests, S1_ConvertIntegerToString_GivenZero)
{
    EXPECT_EQ("0", Convert(0));
}

} // namespace S2

