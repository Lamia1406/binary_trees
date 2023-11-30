#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int check_comp(const binary_tree_t *tree, size_t index, size_t nodes);
	size_t binary_tree_nodes(const binary_tree_t *tree);

	if (tree == NULL)
		return (0);
	return (check_is_complete(tree, 0, binary_tree_nodes(tree)));
}

/**
 * check_comp - recursively checks if a binary tree is complete
 * @tree: pointer to the current node
 * @index: index of the current node
 * @nodes: total number of nodes in the tree
 * Return: 1 if the subtree rooted at the current node is complete, 0 otherwise
 */
int check_comp(const binary_tree_t *tree, size_t index, size_t nodes)
{
	if (tree == NULL)
		return (1);
	if (index >= node_count)
		return (0);
	return (check_comp(tree->left, 2 * index + 1, node_count) &&
			check_comp(tree->right, 2 * index + 2, node_count));
}
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: number of leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}

