//
//  ListNode.hpp
//  EPI
//
//  Created by Chris (Murim) Park on 2/19/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#ifndef ListNode_hpp
#define ListNode_hpp

#include <memory>

template <typename T>
class ListNode {
public:
    ListNode() {}
    ListNode(const T &v) : value(v) {}
    T value;
    std::shared_ptr<ListNode<T>> next;
};

typedef std::shared_ptr<ListNode<int>> ListNodeIntPtr;

#endif /* ListNode_hpp */

