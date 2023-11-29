#include "binary_trees.h"
/**
 * binary_tree_is_bst - checks if a binary tree is a Binary Search Tree (BST)
 * @tree: pointer to the root node of the binary tree
 *
 * Return: 1 if the tree is a BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int check_BST(const binary_tree_t *tree, const int *min, const int *max);
	if (tree == NULL)
		return (0);
	return (check_BST(tree, NULL, NULL));
}
/**
 * check_BST - checks if a binary tree is a Binary Search Tree (BST)
 * @tree: pointer to the root node of the binary tree
 * @min: pointer to the minimum allowed value for the current subtree
 * @max: pointer to the maximum allowed value for the current subtree
 * Return: 1 if the tree is a BST, 0 otherwise
 */
int check_BST(const binary_tree_t *tree, const int *min, const int *max)
{
	if (tree == NULL)
		return (1);
	if ((min != NULL && tree->n <= *min) || (max != NULL && tree->n >= *max))
		return (0);
	return (check_BST(tree->left, min, &tree->n) &&
			check_BST(tree->right, &tree->n, max));
}
