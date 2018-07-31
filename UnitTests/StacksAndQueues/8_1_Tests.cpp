//
//  StackWithMaxTests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 2/24/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/StacksAndQueues/8.1/Solution1.hpp"

TEST(StackWithMaxTests, Max_WithPushedValues_ReturnsCorrectValue)
{
    S1::StackWithMax<int> stack;
    stack.push(5);
    stack.push(3);
    stack.push(1);
    stack.push(4);
    EXPECT_EQ(5, stack.max());
}

TEST(StackWithMaxTests, Max_WithPushAndPoppedValues_ReturnsCorrectValue)
{
    S1::StackWithMax<int> stack;
    stack.push(3);
    stack.push(5);
    stack.pop();
    stack.push(4);
    stack.push(1);
    stack.pop();
    EXPECT_EQ(4, stack.max());
}
