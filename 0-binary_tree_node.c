#include "binary_trees.h"
/**
 * *binary_tree_node - function that creates a node
 * @parent: pointer to parent node
 * @value: value to be stored in node
 * Return: pointer or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *TempNode = malloc(sizeof(binary_tree_t));

	TempNode->n = value;
	TempNode->parent = parent;
	TempNode->left = NULL;
	TempNode->right = NULL;

	return (TempNode);
}
