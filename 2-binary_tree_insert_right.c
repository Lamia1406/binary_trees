#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right- inserts a node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);
	if (parent->right != NULL)
		binary_tree_insert_right(node, parent->right->n);
	parent->right = node;
	return (node);
}
