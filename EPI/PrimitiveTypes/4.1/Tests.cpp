//
//  Tests.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 1/20/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Tests.hpp"
#include "Solution1.hpp"
#include "Solution2.hpp"
#include "Solution3.hpp"
#include <iostream>
#include <random>
#include <ctime>

// 1 (...0001) : 1
// 3 (...0011) : 0
// 7 (...0111) : 1
// expect: total parity = 0

Tests::Tests()
{
    const int num_test_points = 10000000;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<unsigned long long> dis(0, ULLONG_MAX);
    for (unsigned int i = 0; i < num_test_points; ++i)
        m_numbers.push_back(dis(gen));
}

void Tests::TestSolution1()
{
    std::clock_t start = std::clock();
    short parity = S1::Parity(m_numbers);
    const double duration = (std::clock() - start) / (double) CLOCKS_PER_SEC;
    std::cout << "[TestSolution1] Parity = " << parity << "; Duration = " << duration << " seconds." << std::endl;
}

void Tests::TestSolution2()
{
    std::clock_t start = std::clock();
    S2::ParityCalculator pc = S2::ParityCalculator();
    short parity = pc.Parity(m_numbers);
    const double duration = (std::clock() - start) / (double) CLOCKS_PER_SEC;
    std::cout << "[TestSolution2] Parity = " << parity << "; Duration = " << duration << " seconds." << std::endl;
}

void Tests::TestSolution3()
{
    std::clock_t start = std::clock();
    short parity = S3::Parity(m_numbers);
    const double duration = (std::clock() - start) / (double) CLOCKS_PER_SEC;
    std::cout << "[TestSolution3] Parity = " << parity << "; Duration = " << duration << " seconds." << std::endl;
}
