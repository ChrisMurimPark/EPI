//
//  Solution1.hpp
//  EPI
//
//  Created by Chris (Murim) Park on 2/24/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#ifndef Solution1_hpp
#define Solution1_hpp

#include <stack>
#include <exception>

namespace S1
{

// N = number of elements in stack
// This implementation uses a second value "largest" that stores the max value up to that point for each value
// resulting in O(N) additional space
template <typename T>
class StackWithMax
{
public:
    // time: O(1)
    void push(const T &e)
    {
        m_stack.emplace(StackItemWithLargestValue{e, m_stack.empty() ? e : std::max(e, m_stack.top().largest)});
    }
    
    // time: O(1)
    T pop()
    {
        if (m_stack.empty())
            throw "Cannot pop item from an empty stack.";
        const T to_return = m_stack.top().item;
        m_stack.pop();
        return to_return;
    }
    
    // time: O(1)
    size_t max()
    {
        if (m_stack.empty())
            throw "std::exception(""No max value exists for empty stack.";
        return m_stack.top().largest;
    }
private:
    struct StackItemWithLargestValue
    {
        T item;
        T largest;
    };
    std::stack<StackItemWithLargestValue> m_stack;
};
    
} // namespace S1

#endif /* Solution1_hpp */
