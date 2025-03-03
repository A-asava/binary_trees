#include "binary_trees.h"

/**
 * binary_tree_rotate_right -perfom right-rotation of tree
 * @tree: pointer to root node of the tree
 * Return: the new node
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new;

	if (tree == NULL || tree->left == NULL)
		return (NULL);
	new = tree->left;
	tree->left = new->right;

	if (new->right != NULL)
		new->right->parent = tree;

	new->right = tree;
	new->parent = tree->parent;
	tree->parent = new;

	return (new);
}
