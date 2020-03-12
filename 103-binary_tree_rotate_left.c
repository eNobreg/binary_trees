#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_rotate_left - Roatate a binary tree left
 * @tree: Tree to rotate
 * Return: The new root of the tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *root = NULL;
	binary_tree_t *current = tree->right;

	tree->right = current->left;
	if (current->left != NULL)
		current->left->parent = tree;
	current->parent = tree->parent;
	if (tree->parent == NULL)
		root = current;
	else if (tree == tree->parent->left)
		tree->parent->left = current;
	else
		tree->parent->right = current;

	current->left = tree;
	tree->parent = current;

	if (root)
		return (root);
	return (current);
}
