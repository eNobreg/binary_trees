#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
int find_height(const binary_tree_t *node);
void printLevelOrder(const binary_tree_t *tree, int level, void (*func)(int));
/**
 * binary_tree_levelorder - Initial function to print
 * @tree: Tree to print
 * @func: Pointer to function
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height = 0;
	int i = 0;

	if (tree == NULL || func == NULL)
		return;

	height = find_height(tree);

	for (i = 1; i <= height; i++)
		printLevelOrder(tree, i, func);
}

/**
 * printLevelOrder - Recursive function for lovel order
 * @tree: Tree to print
 * @level: Level to print at
 * @func: function to print
 * Return: never
 */
void printLevelOrder(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		printLevelOrder(tree->left, level - 1, func);
		printLevelOrder(tree->right, level - 1, func);
	}
}

/**
 * find_height - Function to find the height of a tree
 * @node: Node to find the height of
 * Return: The height
 */
int find_height(const binary_tree_t *node)
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

