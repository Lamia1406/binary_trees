#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

size_t binary_tree_height_traverse(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_H = binary_tree_height_traverse(tree->left);
	size_t right_H = binary_tree_height_traverse(tree->right);
	if (left_H >= right_H)
		return (left_H);
	else
		return (right_H);
}

size_t binary_tree_height_traverse(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_H = binary_tree_height_traverse(tree->left) + 1;
	size_t right_H = binary_tree_height_traverse(tree->right) + 1;
	 if (left_H >= right_H)
                return (left_H);
        else
                return (right_H);
}

