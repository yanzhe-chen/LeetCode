#ifndef BINARY_TREE_MAXIMUM_PATH_SUM_HPP_
#define BINARY_TREE_MAXIMUM_PATH_SUM_HPP_

#include "TreeNode.hpp"

class BinaryTreeMaximumPathSum {
public:
	int maxPathSum(TreeNode* root);
private:
	int max_sum;
	int dfs(const TreeNode *root);
};

#endif // BINARY_TREE_MAXIMUM_PATH_SUM_HPP_