#include "binary_trees.h"

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 * @tree: Pointer to the root node
 * Return: 1 if the tree is complete else 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int flag = 0;
	queue_t *queue = NULL;

	if (!tree)
		return (0);

	queue = queue_push(queue, (void *)tree);
	while (queue)
	{
		binary_tree_t *temp = (binary_tree_t *)queue->ptr;

		if (temp->left)
		{
			if (flag)
				return (0);
			queue = queue_push(queue, (void *)temp->left);
		}
		else
			flag = 1;

		if (temp->right)
		{
			if (flag)
				return (0);
			queue = queue_push(queue, (void *)temp->right);
		}
		else
			flag = 1;

		queue = queue_pop(queue);
	}
	return (1);
}
