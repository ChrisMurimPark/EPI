//
//  Problem1Tests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 2/10/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include <random>
#include <limits>
#include "../../EPI/PrimitiveTypes/ParityOfAWord/Solution1.hpp"
#include "../../EPI/PrimitiveTypes/ParityOfAWord/Solution2.hpp"
#include "../../EPI/PrimitiveTypes/ParityOfAWord/Solution3.hpp"

// Although this test doesn't guarantee that the implementations are correct,
// there's a high degree of confidence that at least one is correct. Over a large
// number of runs, we can have some confidence that these solutions are correct.
TEST(ParityOfAWordTests, GivenRandomNumbers_EachSolutionComputesSameParity)
{
    const size_t NUM_POINTS = 10000;
    std::random_device rd;
    std::mt19937_64 mt;
    mt.seed(time(NULL));
    std::uniform_int_distribution<unsigned long long> distribution;
    std::vector<unsigned long long> test_points;
    test_points.reserve(NUM_POINTS);
    for (size_t i = 0; i < NUM_POINTS; ++i)
        test_points.push_back(distribution(mt));
    const short s1 = S1::Parity(test_points);
//    S2::ParityCalculator pc;
//    const short s2 = pc.Parity(test_points);
    const short s3 = S3::Parity(test_points);
//    EXPECT_EQ(s1, s2);
//    EXPECT_EQ(s2, s3);
    EXPECT_EQ(s1, s3);
}
