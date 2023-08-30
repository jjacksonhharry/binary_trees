#include "binary_trees.h"
/**
 * binary_tree_height_balanc - function that measures the height of a tree
 * @tree: Pointer to the root
 * Return: Height of the tree else return 0
 */
size_t binary_tree_height_balanc(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left_height = tree->left ? 1 + binary_tree_height_balanc(tree->left) : 1;
			right_height = tree->right ? 1 + binary_tree_height_balanc(tree->right) : 1;
		}
		return ((left_height > right_height) ? left_height : right_height);
	}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: A pointer to the root node
 * Return: Balance factor of the tree else 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;
	int total_height = 0;

	if (tree)
	{
		left_height = ((int)binary_tree_height_balanc(tree->left));
		right_height = ((int)binary_tree_height_balanc(tree->right));
		total_height = left_height - right_height;
	}
	return (total_height);
}
