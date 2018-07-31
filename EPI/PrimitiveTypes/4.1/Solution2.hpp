//
//  Solution2.hpp
//  EPI
//
//  Created by Chris (Murim) Park on 1/20/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#ifndef Solution2_hpp
#define Solution2_hpp

#include <vector>
#include <array>

namespace S2
{

class ParityCalculator
{
public:
    ParityCalculator();
    short Parity(unsigned long long number);
    short Parity(const std::vector<unsigned long long> &numbers);
private:
    static std::array<short, USHRT_MAX> m_parities;
    void PrepopulateParities();
};

} // namespace S2
    
#endif /* Solution2_hpp */
