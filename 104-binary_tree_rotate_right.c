#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root;

	if (tree == NULL || tree->left == NULL)
		return (NULL);
	root = tree->left;
	tree->left = root->right;
	if (root->right != NULL)
		root->right->parent = tree;
	root->right = tree;
	root->parent = tree->parent;
	tree->parent = root;
	return (root);
}


