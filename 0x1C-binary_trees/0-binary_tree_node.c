#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer to parent node
 * @value: value to put in the new node
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* malloc space */
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	/* point to parent */
	new->parent = parent;
	new->n = value;

	/* set children to NULL */
	new->left = NULL;
	new->right = NULL;

	return (new);
}
