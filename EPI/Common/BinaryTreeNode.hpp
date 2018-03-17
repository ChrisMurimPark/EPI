//
//  BinaryTreeNode.hpp
//  EPI
//
//  Created by Chris (Murim) Park on 2/25/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include <memory>

template <typename T>
struct BinaryTreeNode
{
    T m_value;
    std::unique_ptr<BinaryTreeNode<T>> left, right;
};

#endif /* BinaryTreeNode_hpp */
