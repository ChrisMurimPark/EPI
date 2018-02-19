//
//  ListNodeUtils.hpp
//  EPI
//
//  Created by Chris (Murim) Park on 2/19/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#ifndef ListNodeUtils_hpp
#define ListNodeUtils_hpp

#include "ListNode.hpp"

template <typename T>
std::shared_ptr<ListNode<T>> VectorToList(const std::vector<const T> sorted_list)
{
    auto dummy = std::make_shared<ListNode<T>>();
    auto tail = dummy;
    for (const int i : sorted_list)
    {
        tail->next = std::make_shared<ListNode<T>>(i);
        tail = tail->next;
    }
    return dummy->next;
}

#endif /* ListNodeUtils_hpp */
