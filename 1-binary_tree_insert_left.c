#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert a node on the left
 * @parent: Parent node
 * @value: Value of new node
 * Return: New node or null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *current = NULL;

	if (parent == NULL)
		return (NULL);

	current = malloc(sizeof(binary_tree_t));
	if (current == NULL)
		return (NULL);

	current->parent = parent;
	current->n = value;
	current->left = NULL;
	current->right = NULL;

	if (parent->left != NULL)
	{
		current->left = parent->left;
		current->left->parent = current;
	}

	parent->left = current;
	return (current);
}
