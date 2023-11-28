#include "binary_trees.h"
#include <stdlib.h>
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	
	binary_tree_t *node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent->left != NULL)
		binary_tree_insert_left(node, parent->left->n);
	parent->left = node;
	return (parent);
}
