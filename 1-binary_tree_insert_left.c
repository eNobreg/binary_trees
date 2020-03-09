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
	binary_tree_t *saved = NULL;
	binary_tree_t *current = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		current = binary_tree_node(parent, value);
		parent->left = current;
		return (current);
	}
	else
	{
		saved = parent->left;
		current = binary_tree_node(parent, value);
		parent->left = current;
		saved->parent = current;
		current->left = saved;
		return (current);
	}
}
