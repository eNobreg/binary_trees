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
	binary_tree_t *current = malloc(sizeof(binary_tree_t));

	current = tree->parent;
	while (current)
	{
		count++;
		current = current->parent;
	}
	free(current);
	return (count);
}
