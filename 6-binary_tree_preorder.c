#include "binary_trees.h"

/**
 *binary_tree_preorder - function to traverse a tree using pre-order
 *@tree: pointer to the root node of the tree to be traversed
 *@func: pointer to a function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
