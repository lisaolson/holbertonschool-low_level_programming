#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: sibling of node or NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *cursor;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	cursor = node->parent;

	if (cursor->left != node)
		return (cursor->left);

	if (cursor->right != node)
		return (cursor->right);

	return (NULL);

/**
 * if (node->parent->right && node->parent->right != node)
 *		return (node->parent->right);
 *
 *	if (node->parent->left && node->parent->left != node)
 *		return (node->parent->left);
 *
 *	return (NULL);
*/
}
