#include "binary_trees.h"
#include <stdlib.h>
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	
	binary_tree_t *node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent->right != NULL)
		binary_tree_insert_right(node, parent->right->n);
	parent->right = node;
	return (parent);
}
