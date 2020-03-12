#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "binary_trees.h"
int bstUtil(const binary_tree_t *tree, int min, int max);
/**
 * binary_tree_is_bst - Checks for a BST
 * @tree: Tree to check
 * Return: 0 or 1 on success or fail
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (bstUtil(tree, INT_MIN, INT_MAX));
}

/**
 * bstUtil - Actual recursive function to check BST
 * @tree: Tree to check
 * @min: Min int value
 * @max: Max int value
 * Return: 0 or 1
 */
int bstUtil(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (bstUtil(tree->left, min, tree->n - 1) &&
			bstUtil(tree->right, tree->n + 1, max));
}
