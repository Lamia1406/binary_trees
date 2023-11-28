#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to tranverse
 * @func: pointer  to the function to call for each node
 *
 * Return:void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
{
	if (tree == NULL || func == NULL)
		return;


	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);

	func(tree->n);
}