#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node
 *
 * Return: size of tree or NULL on failure
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (size);

	size = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);
	return (size);
}
