#include "binary_trees.h"

/**
 * bst_search - searches for a value in a BST
 * @tree: tree to search value for
 * @value: value to look for
 * Return: pointer to the node containing a value equal to value
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	const bst_t *temp;


	if (tree == NULL)
		return (NULL);
	temp = tree;
	if (temp->n < value)
		return (bst_search(temp->right, value));
	if (temp->n > value)
		return (bst_search(temp->left, value));
	if (temp->n == value)
		return ((bst_t *)temp);
	return (NULL);
}
