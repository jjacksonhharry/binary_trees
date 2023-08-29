#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree by post-order traversal
 * @func: Pointer to a function
 * @tree: Pointer to the root
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func != NULL && tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
