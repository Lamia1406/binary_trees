#include "binary_trees.h"

/**
* binary_tree_uncle - Find the uncle
* @node: pointer to the node to find and uncle
*
* Return: Uncle of the node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *Gparent = NULL;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	Gparent = node->parent->parent;

	if (Gparent->left == node->parent && Gparent->right != NULL)
		return (Gparent->right);

	if (Gparent->right == node->parent && Gparent->left != NULL)
		return (Gparent->left);

	return (NULL);
}
