#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: size_t height of tree
*/

size_t max(size_t left, size_t right)
{
	if (left > right)
		return (left);
	else
		return (right);
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (max(binary_tree_height(tree->left), binary_tree_height(tree->right) + 1));

}
