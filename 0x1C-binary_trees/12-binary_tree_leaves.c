#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: size_t number of leaves or 0
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Check for leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right) + 1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
