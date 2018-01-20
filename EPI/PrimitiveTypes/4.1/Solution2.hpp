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
#include <unordered_map>

namespace S2
{
    class ParityCalculator
    {
    public:
        ParityCalculator();
        short Parity(unsigned long long number);
        short Parity(const std::vector<unsigned long long> &numbers);
    private:
        static std::unordered_map<short, short> m_parity_map;
        void PopulateParityMap();
    };

} // namespace S2


#endif /* Solution2_hpp */
