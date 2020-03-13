#include "binary_trees.h"
/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: root node of tree
 * Return: size of tree from a given node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = binary_tree_size(tree->left) + 1;
	count += binary_tree_size(tree->right);

	return (count);
}
/**
 * check_node_index - checks the node at a given index
 * @size: total number of nodes in the tree
 * @index: current node index
 * @tree: pointer to root node
 * Return: 0 if the index of a given node is equal or greater than the
 * size or 1 if its null
 **/
int check_node_index(size_t size, size_t index, const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (index >= size)
		return (0);
	return (check_node_index(size, 2 * index + 1, tree->left) &&
		check_node_index(size, 2 * index + 2, tree->right));
}
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to root of tree
 * Return: 1 if tree is complete or 0 if not or NULL
 **/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (check_node_index(binary_tree_size(tree), 0, tree));
}
