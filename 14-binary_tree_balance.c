#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
int find_height(binary_tree_t *node);
/**
 * binary_tree_balance - Returns balance of the binary tree
 * @tree: Binary tree to find the balance of
 * Return: The balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (find_height(tree->left) - find_height(tree->right));
}

/**
 * find_height - Find the height of tree
 * @node: Root node to check
 * Return: An int
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
