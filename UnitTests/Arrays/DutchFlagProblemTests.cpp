//
//  DutchFlagProblemTests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 2/10/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/Arrays/DutchFlagProblem/Solution1.hpp"
#include "../../EPI/Arrays/DutchFlagProblem/Solution2.hpp"
#include "../../EPI/Arrays/DutchFlagProblem/Solution3.hpp"

#include <iostream>

class DutchFlagProblemTests : public ::testing::Test {
protected:
    
    virtual void SetUp()
    {
        const size_t NUM_POINTS = 10;
        const unsigned int seed = (unsigned int) time(NULL);
        srand(seed);
        for (size_t i = 0, n = NUM_POINTS; i < n; ++i)
            m_test_numbers[i] = rand() % 4;  // only do numbers in range [0,4)
        m_pivot_index = rand() % NUM_POINTS;
    }
    
    void TestExpectations(const int pivot)
    {
        // Make sure that all values prior to first instance of pivot is < pivot
        // and that all values after last instance of pivot is > pivot
        for (size_t i = 0; i < NUM_POINTS; ++i)
        {
            if (m_test_numbers[i] == pivot)
                break;
            EXPECT_LT(m_test_numbers[i], pivot);
        }
        for (size_t i = NUM_POINTS - 1; i < NUM_POINTS; --i)
        {
            if (m_test_numbers[i] == pivot)
                break;
            EXPECT_GT(m_test_numbers[i], pivot);
        }
    }
    
    const static size_t NUM_POINTS = 10;
    std::array<int, NUM_POINTS> m_test_numbers;
    size_t m_pivot_index;
};

TEST_F(DutchFlagProblemTests, Solution1Test)
{
    const int pivot = m_test_numbers[m_pivot_index];
    S1::DutchFlagPartition(m_test_numbers, m_pivot_index);
    TestExpectations(pivot);
}

TEST_F(DutchFlagProblemTests, Solution2Test)
{
    const int pivot = m_test_numbers[m_pivot_index];
    S2::DutchFlagPartition(m_test_numbers, m_pivot_index);
    TestExpectations(pivot);
}

TEST_F(DutchFlagProblemTests, Solution3Test)
{
    const int pivot = m_test_numbers[m_pivot_index];
    S3::DutchFlagPartition(m_test_numbers, m_pivot_index);
    TestExpectations(pivot);
}
