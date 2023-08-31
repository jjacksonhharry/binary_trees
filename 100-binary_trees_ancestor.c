#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 * Return: A pointer to the lowest common ancestor node else NULL
 */
binary_tree_t *binary_trees_ancestor(
					const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *temp;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	temp = (binary_tree_t *)second;

	while (first)
	{
		while (temp)
		{
			if (temp == first)
				return (temp);
			temp = temp->parent;
		}
		temp = (binary_tree_t *)second;
		first = first->parent;
	}
	return (NULL);
}
