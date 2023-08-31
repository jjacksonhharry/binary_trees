#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree using level-order
 * @tree: Pointer to the root node
 * @func: Pointer to a function
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *queue[100];
	int front = 0, rear = 0;

	if (!tree || !func)
		return;

	queue[rear++] = (binary_tree_t *)tree;
	while (front < rear)
	{
		binary_tree_t *temp = queue[front++];

		func(temp->n);
		if (temp->left)
			queue[rear++] = temp->left;
		if (temp->right)
			queue[rear++] = temp->right;
	}
}
