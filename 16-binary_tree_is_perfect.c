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
	int left, right, size, power;

	if (tree == NULL)
		return (0);

	left = find_height(tree->left);
	right = find_height(tree->right);
	size = binary_tree_size(tree);

	if (size == 1)
		return (1);
	if (left >= 0 && right >= 0 && left == right)
	{
		power = is_power(left +1);

	if (power -1 == size)
		return(1);
	}
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
		return (-1);
	}
	if (node->left == NULL && node->right == NULL)
		return (0);
	else
	{
		left = find_height(node->left) + 1;
		right = find_height(node->right) + 1;

		if (left > right)
		{
			return (left);
		}
		else
		{
			return (right);
		}
	}
}
int is_power(int n)
{
	int power, i;

	for (i = 0, power = 1; i <= n; i++)
		power *= 2;
	return (power);
}
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = binary_tree_size(tree->left) + 1;
	count += binary_tree_size(tree->right);

	return (count);
}
