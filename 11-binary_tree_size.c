#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

size_t binary_tree_size_traverse(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return binary_tree_size_traverse(tree);
}

size_t binary_tree_size_traverse(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_S = binary_tree_size_traverse(tree->left);
	size_t right_S = binary_tree_size_traverse(tree->right);

    return left_S + right_S + 1;
}

