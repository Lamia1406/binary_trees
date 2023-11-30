#include "binary_trees.h"

/**
 *  binary_tree_is_perfect - checks if a binary tree is perfect
 *  @tree:  a pointer to the root node of the tree to check
 *
 *  Return: 1 on sucess else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);

	return (0);
}
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: pointer to root node
 *
 * Return: Binary tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_H, right_H;

	if (tree == NULL)
		return (0);
	left_H = binary_tree_height_traverse(tree->left);
	right_H = binary_tree_height_traverse(tree->right);

	if (left_H > right_H)
		return (left_H);
	else
		return (right_H);
}
/**
 * binary_tree_height_traverse -  measures the height of a binary tree
 * @tree: pointer to root node
 *
 * Return: Binary tree height
 */
size_t binary_tree_height_traverse(const binary_tree_t *tree)
{
	size_t left_H, right_H;

	if (tree == NULL)
		return (0);
	left_H = binary_tree_height_traverse(tree->left) + 1;
	right_H = binary_tree_height_traverse(tree->right) + 1;

	if (left_H >= right_H)
		return (left_H);
	else
		return (right_H);
}
