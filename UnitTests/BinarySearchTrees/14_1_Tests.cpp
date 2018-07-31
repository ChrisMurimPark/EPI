//
//  IsBSTTests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 3/17/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/BinarySearchTrees/14.1/Solution1.hpp"
#include "../../EPI/BinarySearchTrees/14.1/Solution2.hpp"

TEST(IsBSTTests, S1_GivenNonBST_ReturnsFalse)
{
    std::unique_ptr<BinaryTreeNode<int>> one = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> two = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> three = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> four = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> five = std::make_unique<BinaryTreeNode<int>>();
    
    one->m_value = 0;
    two->m_value = -1;
    three->m_value = 10;
    four->m_value = 2;
    five->m_value = 1;
    
    one->left = std::move(two);
    one->left->right = std::move(three);
    one->right = std::move(four);
    one->right->left = std::move(five);
    
    EXPECT_FALSE(S1::IsBST(one));
}

TEST(IsBSTTests, S1_GivenBST_ReturnsTrue)
{
    std::unique_ptr<BinaryTreeNode<int>> one = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> two = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> three = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> four = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> five = std::make_unique<BinaryTreeNode<int>>();
    
    one->m_value = 0;
    two->m_value = -5;
    three->m_value = -1;
    four->m_value = 2;
    five->m_value = 1;
    
    one->left = std::move(two);
    one->left->right = std::move(three);
    one->right = std::move(four);
    one->right->left = std::move(five);
    
    EXPECT_TRUE(S1::IsBST(one));
}

TEST(IsBSTTests, S1_GivenEmptyTree_ReturnsTrue)
{
    EXPECT_TRUE(S1::IsBST(nullptr));
}

TEST(IsBSTTests, S2_GivenNonBST_ReturnsFalse)
{
    std::unique_ptr<BinaryTreeNode<int>> one = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> two = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> three = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> four = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> five = std::make_unique<BinaryTreeNode<int>>();
    
    one->m_value = 0;
    two->m_value = -1;
    three->m_value = 10;
    four->m_value = 2;
    five->m_value = 1;
    
    one->left = std::move(two);
    one->left->right = std::move(three);
    one->right = std::move(four);
    one->right->left = std::move(five);
    
    EXPECT_FALSE(S2::IsBST(one));
}

TEST(IsBSTTests, S2_GivenBST_ReturnsTrue)
{
    std::unique_ptr<BinaryTreeNode<int>> one = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> two = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> three = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> four = std::make_unique<BinaryTreeNode<int>>();
    std::unique_ptr<BinaryTreeNode<int>> five = std::make_unique<BinaryTreeNode<int>>();
    
    one->m_value = 0;
    two->m_value = -5;
    three->m_value = -1;
    four->m_value = 2;
    five->m_value = 1;
    
    one->left = std::move(two);
    one->left->right = std::move(three);
    one->right = std::move(four);
    one->right->left = std::move(five);
    
    EXPECT_TRUE(S2::IsBST(one));
}

TEST(IsBSTTests, S2_GivenEmptyTree_ReturnsTrue)
{
    EXPECT_TRUE(S2::IsBST(nullptr));
}
