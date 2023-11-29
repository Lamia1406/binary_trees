#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor, or NULL if none found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return (first->parent);
	if (first->parent == second)
		return (first->parent);
	if (first == second->parent)
		return (second->parent);
	if (binary_trees_ancestor(first->parent, second) != NULL)
		return (first->parent);
	else if (binary_trees_ancestor(first, second->parent) != NULL)
		return (second->parent);
	return (NULL);
}

