#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
int find_height(binary_tree_t *node);
/**
 * binary_tree_is_perfect - Check if binary tree is perfect
 * @tree: Tree to check
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (find_height(tree->left) - find_height(tree->right) == 0)
		return (1);
	return (0);
}
/**
 * find_height - Find the height
 * @node: Tree to find the eight
 * Return: The height
 */
int find_height(binary_tree_t *node)
{
	int left = 0;
	int right = 0;

	if (node == NULL)
	{
		return (0);
	}
	else
	{
		left = find_height(node->left);
		right = find_height(node->right);

		if (left > right)
		{
			return (left + 1);
		}
		else
		{
			return (right + 1);
		}
	}
}
