#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i = 1;

	if (array == NULL)
		return (NULL);

	root = bst_insert(&root, array[0]);

	while (i < size)
	{
		bst_insert(&root, array[i]);
		i++;
	}
	return (root);
}