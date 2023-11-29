#include "binary_trees.h"
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
