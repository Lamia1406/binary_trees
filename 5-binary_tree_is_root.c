#include "binary_trees.h"
#include <stdlib.h>
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL && node != NULL)
	{
		return (1);
	}
	else
		return (0);
}
