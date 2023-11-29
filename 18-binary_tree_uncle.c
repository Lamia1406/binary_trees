#incldude "binary_trees.h"

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *Gparent = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	GParent = parent->parent;

	if (Gparent->left_child == parent && Gparent->right_child != NULL)
		return (Gparent->right_child)

	if (Gparent->right_child == parent && Gparent->left_child != NULL)
		return (Gparent->left_child);

	return (NULL);
}
