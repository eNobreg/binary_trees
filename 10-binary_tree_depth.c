#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node
 * @tree: Tree to mesaure depth of
 * Return: The depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	tree = tree->parent;
	while (tree)
	{
		tree = tree->parent;
		count++;
	}
	return (count);
}
