//
//  IsHeightBalancedTests.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 2/25/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/BinaryTrees/9.1/Solution1.hpp"

TEST(IsHeightBalancedTests, IsHeightBalanced_GivenUnbalancedTree_ReturnsFalse)
{
    auto root = std::make_unique<BinaryTreeNode<int>>();
    auto one = std::make_unique<BinaryTreeNode<int>>();
    auto two = std::make_unique<BinaryTreeNode<int>>();
    auto three = std::make_unique<BinaryTreeNode<int>>();
    auto four = std::make_unique<BinaryTreeNode<int>>();
    root->left = std::move(one);
    root->left->left = std::move(two);
    root->left->left->right = std::move(three);
    root->right = std::move(four);
    EXPECT_EQ(false, S1::IsHeightBalanced(root));
}

TEST(IsHeightBalancedTests, IsHeightBalanced_GivenBalancedTree_ReturnsTrue)
{
    auto root = std::make_unique<BinaryTreeNode<int>>();
    auto one = std::make_unique<BinaryTreeNode<int>>();
    auto two = std::make_unique<BinaryTreeNode<int>>();
    auto three = std::make_unique<BinaryTreeNode<int>>();
    auto four = std::make_unique<BinaryTreeNode<int>>();
    root->left = std::move(one);
    root->right = std::move(two);
    root->left->left = std::move(three);
    root->right->right = std::move(four);
    EXPECT_EQ(true, S1::IsHeightBalanced(root));
}

TEST(IsHeightBalancedTests, IsHeightBalanced_GivenLeaf_ReturnsTrue)
{
    std::unique_ptr<BinaryTreeNode<int>> root;
    EXPECT_EQ(true, S1::IsHeightBalanced(root));
}
