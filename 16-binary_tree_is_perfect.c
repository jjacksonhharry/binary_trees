#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if the tree is perfect else return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
	{
		left_height = binary_tree_is_perfect(tree->left);
		right_height = binary_tree_is_perfect(tree->right);

		return (left_height && right_height);
	}
	return (0);
}
