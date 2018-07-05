#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left-child of another node
 * @parent: pointer to parent node
 * @value: value to put in the new node
 *
 * Return: pointer to new node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* malloc space */
	binary_tree_t *new;
	binary_tree_t *temp;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	/* point to parent */
	if (parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = new;
		new->parent = parent;
		new->left = temp;
		temp->parent = new;
		new->right = NULL;
		return (new);
	}
	new->parent = parent;
	new->n = value;
	parent->left = new;

	/* set children to NULL */
	new->left = NULL;
	new->right = NULL;

	return (new);
}
