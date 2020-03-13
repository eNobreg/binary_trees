#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * or NULL
 **/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	int lvl_diff;
	const binary_tree_t *tmp;


	lvl_diff = binary_tree_depth(first) - binary_tree_depth(second);
	if (lvl_diff < 0)
	{
		tmp = second;
		second = first;
		first = tmp;
		lvl_diff *= -1;
	}
	while (lvl_diff > 0)
	{
		first = first->parent;
		lvl_diff--;
	}
	while (first && second)
	{
		if (first->n == second->n)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}
/**
 * binary_tree_depth - Measures the depth of a node
 * @tree: Tree to mesaure depth of
 * Return: The depth
 * copied from project 10
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	tree = tree->parent;
	while (tree)
	{
		tree = tree->parent;
		count++;
	}
	return (count);
}
