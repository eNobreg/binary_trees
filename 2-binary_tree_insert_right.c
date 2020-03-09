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
	binary_tree_t *saved = NULL;
	binary_tree_t *current = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		current = binary_tree_node(parent, value);
		parent->right = current;
		return (current);
	}
	else
	{
		saved = parent->right;
		current = binary_tree_node(parent, value);
		parent->right = current;
		saved->parent = current;
		current->right = saved;
		return (current);
	}
}
