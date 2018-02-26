//
//  Solution1.hpp
//  EPI
//
//  Created by Chris (Murim) Park on 2/25/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#ifndef Solution1_hpp
#define Solution1_hpp

#include "BinaryTreeNode.hpp"

namespace S1
{
    struct TreeData
    {
        bool is_balanced;
        int height;
    };
    
    template <typename T>
    TreeData IsHeightBalancedHelper(const std::unique_ptr<BinaryTreeNode<T>> &root)
    {
        if (root == nullptr)
            return {true, -1};
        const TreeData left_data = IsHeightBalancedHelper(root->left);
        if (!left_data.is_balanced)
            return {false, 0};
        const TreeData right_data = IsHeightBalancedHelper(root->right);
        if (!right_data.is_balanced)
            return {false, 0};
        const bool is_balanced = abs(left_data.height - right_data.height) <= 1;
        const int height = 1 + std::max(left_data.height, right_data.height);
        return {is_balanced, height};
    }
    
    // N = number of nodes in tree
    // time: O(N) some time is saved by only processing right subtree if left is balanced
    // space: O(N) only happens when tree is completely skewed to one side
    template <typename T>
    bool IsHeightBalanced(const std::unique_ptr<BinaryTreeNode<T>> &root)
    {
        return IsHeightBalancedHelper(root).is_balanced;
    }

} // namespace S1

#endif /* Solution1_hpp */
