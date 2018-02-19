//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 2/19/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"

namespace S1
{
    void AppendListNode(ListNodePtr &L, ListNodePtr &itr)
    {
        itr->next = L;
        L = L->next;
        itr = itr->next;
    }
    
    // N = number of elements in L1
    // M = number of elements in L2
    // time: O(N + M)
    // space: O(1)
    ListNodePtr MergeSortedLists(ListNodePtr L1, ListNodePtr L2)
    {
        ListNodePtr head = std::make_shared<ListNode<int>>();
        ListNodePtr itr = head;
        while (L1 && L2)
        {
            ListNodePtr &smaller = L1->value < L2->value ? L1 : L2;
            AppendListNode(smaller, itr);
        }
        itr->next = L1 ? L1 : L2;
        return head->next;
    }
    
}

