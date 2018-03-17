//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 3/17/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"
#include <climits>
#include <algorithm>

namespace S1
{

struct SubTreeData
{
    int max;
    int min;
    bool is_bst;
};
    
SubTreeData IsBSTHelper(const std::unique_ptr<BinaryTreeNode<int>> &tree)
{
    if (tree == nullptr)
        return { INT_MIN, INT_MAX, true };
    const SubTreeData &left = IsBSTHelper(tree->left);
    if (!left.is_bst)
        return { INT_MIN, INT_MAX, false };
    const SubTreeData &right = IsBSTHelper(tree->right);
    if (!right.is_bst)
        return { INT_MIN, INT_MAX, false };
    const int tree_max = std::max(tree->m_value, std::max(left.max, right.max));
    const int tree_min = std::min(tree->m_value, std::min(left.min, right.min));
    const bool is_bst = tree->m_value > left.max && tree->m_value <= right.min;
    return { tree_max, tree_min, is_bst };
}
    
// N = number of nodes in tree
// h = height of tree
// time: O(N)
// space: O(h) from call stack
bool IsBST(const std::unique_ptr<BinaryTreeNode<int>> &tree)
{
    return IsBSTHelper(tree).is_bst;
}
    
} // namespace S1
