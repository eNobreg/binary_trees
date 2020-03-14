#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
bst_t *bst_utility(bst_t *tree, int value);

/**
 * bst_insert - Insert a BST node
 * @tree: Tree to insert the node into
 * @value: Value to give the node
 * Return: The new node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new = NULL;
	bst_t *root = NULL;

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL) /* If no root node */
	{
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}

	root = bst_utility(*tree, value);

	if (root)
	{
		new = binary_tree_node(root, value);
		if (value < root->n)
			root->left = new;
		else
			root->right = new;
		return (new);
	}
	else
		return (NULL);
}

/**
 * bst_utility - Utility function to find the correct place for a node
 * @node: Node given to find
 * @value: Value given for the node
 * Return: The new node
 */

bst_t *bst_utility(bst_t *node, int value)
{
	if (node == NULL)
		return (NULL);

	if (value < node->n)
	{
		if (node->left != NULL)
			return (bst_utility(node->left, value));
		return (node);
	}
	else if (value > node->n)
	{
		if (node->right != NULL)
			return (bst_utility(node->right, value));
		return (node);
	}
	return (NULL);
}
