#include "binary_trees.h"

/**
 *binary_tree_leaves - returns numbr of leaves in a tree
 *@tree: pointer to the root node to count
 *
 *Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
	{
		leaves = binary_tree_leaves(tree->left) +  binary_tree_leaves(tree->right);
		return (leaves);
	}
	return (1);
}
