#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: size_t depth of tree or 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	const binary_tree_t *cursor;

	if (tree == NULL)
		return (0);

	cursor = tree;
	depth = 0;
	while (cursor->parent != NULL)
	{
		cursor = cursor->parent;
		depth += 1;
	}

	return (depth);
}
