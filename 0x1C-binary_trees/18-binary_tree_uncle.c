#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: sibling of node or NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *cursor;

	if (node->parent->parent == NULL || node->parent == NULL || node == NULL)
		return (NULL);

	cursor = node->parent->parent;

	if (cursor->left != node->parent)
		return (cursor->left);

	if (cursor->right != node->parent)
		return (cursor->right);

	return (NULL);
}
