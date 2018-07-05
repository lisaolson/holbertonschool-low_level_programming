#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right-child of another node
 * @parent: pointer to parent node
 * @value: value to put in the new node
 *
 * Return: pointer to new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* malloc space */
	binary_tree_t *new;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;

	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = new;
		new->parent = parent;
		new->right = temp;
		temp->parent = new;
		new->left = NULL;
		return (new);
	}
	parent->right = new;

	/* set children to NULL */
	new->left = NULL;
	new->right = NULL;

	return (new);
}
