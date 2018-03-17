//
//  Solution2.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 3/17/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution2.hpp"
#include <climits>

namespace S2
{
    
bool IsWithinBounds(const std::unique_ptr<BinaryTreeNode<int>> &tree, const int min, const int max)
{
    if (tree == nullptr)
        return true;
    if (tree->m_value < min || tree->m_value > max)
        return false;
    if (!IsWithinBounds(tree->left, min, tree->m_value))
        return false;
    if (!IsWithinBounds(tree->right, tree->m_value, max))
        return false;
    return true;
}

// N = number of nodes in tree
// h = height of tree
// time: O(N)
// space: O(h) from call stack
// same space/time complexity asymptotically, but this soution is lighter on space and
// is faster for cases where BST criteria is broken closer to root
bool IsBST(const std::unique_ptr<BinaryTreeNode<int>> &tree)
{
    return IsWithinBounds(tree, INT_MIN, INT_MAX);
}
    
} // namespace S2
