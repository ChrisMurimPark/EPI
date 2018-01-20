//
//  Tests.hpp
//  EPI
//
//  Created by Chris (Murim) Park on 1/20/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#ifndef Tests_hpp
#define Tests_hpp

/*
 
 PROBLEM DESCRIPTION:
 
 The parity of a binary word is 1 if the number of 1s in the word is odd; otherwise, it is 0.
 For example, the parity of 1011 is 1, and the parity of 10001000 is 0.
 Parity checks are used to detect single bit errors in data storage and communication.
 It is fairly straightforward to write code that computes the parity of a single 64-bit word.
 
 How would you compute the parity of a very large number of 64-bit words?
 
 */

#include <vector>

class Tests
{
public:
    Tests();
    void TestSolution1();
    void TestSolution2();
    void TestSolution3();
private:
    std::vector<unsigned long long> m_numbers;
};



#endif /* Tests_hpp */
