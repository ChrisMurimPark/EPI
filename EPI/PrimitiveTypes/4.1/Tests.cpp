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
#include <vector>
#include <iostream>

// 1 (...0001) : 1
// 3 (...0011) : 0
// 7 (...0111) : 1
// expect: total parity = 0

const std::vector<unsigned long long> numbers = { 1, 3, 7 };

void TestSolution1()
{
    short parity = S1::Parity(numbers);
    std::cout << parity << std::endl;
}

void TestSolution2()
{
    S2::ParityCalculator pc = S2::ParityCalculator();
    short parity = pc.Parity(numbers);
    std::cout << parity << std::endl;
}
