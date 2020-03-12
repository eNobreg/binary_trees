#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_rotate_right - Roatate a binary tree left
 * @tree: Tree to rotate
 * Return: The new root of the tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root = NULL;
	binary_tree_t *current = NULL;

	if (tree == NULL)
		return (tree);

	current = tree->left;

	tree->left = current->right;
	if (current->right != NULL)
		current->right->parent = tree;
	current->parent = tree->parent;
	if (tree->parent == NULL)
		root = current;
	else if (tree == tree->parent->right)
		tree->parent->right = current;
	else
		tree->parent->left = current;

	current->right = tree;
	tree->parent = current;

	if (root)
		return (root);
	return (current);
}
