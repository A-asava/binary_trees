#include "binary_trees.h"

/**
 *binary_tree_is_leaf - checks if node is a leaf
 *@node: pointer to node to check
 *Return: (1) if it is a leaf otherwise (0)
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
