#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert a node on the right
 * @parent: Parent node
 * @value: Value of the node
 * Return: Null or the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *current = malloc(sizeof(binary_tree_t));

	if (parent == NULL || current == NULL)
		return (NULL);

	current->parent = parent;
	current->n = value;
	current->left = NULL;
	current->right = NULL;

	if (parent->right != NULL)
	{
		current->right = parent->right;
		current->right->parent = current;
	}

	parent->right = current;
	return (current);
}
