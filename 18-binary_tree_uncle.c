#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Find nodes uncle
 * @node: Node to find uncle
 * Return: Null or something
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - Find sibling of node
 * @node: Node of tree
 * Return: Null or the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->n < node->parent->n)
	{
		return (node->parent->right);
	}
	if (node->n > node->parent->n)
	{
		return (node->parent->left);
	}
	return (NULL);
}
