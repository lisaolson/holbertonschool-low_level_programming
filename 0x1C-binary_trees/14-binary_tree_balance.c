#include "binary_trees.h"

/**
 * max - returns max of two numbers
 * @left: first number passed in
 * @right: second number passed in
 *
 * Return: size_t max of two numbers
*/

size_t max(size_t left, size_t right)
{
	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_height - finds height of binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (max(binary_tree_height(tree->left),
		binary_tree_height(tree->right)) + 1);

}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: int balance factor or 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	const binary_tree_t *cursor_left;
	const binary_tree_t *cursor_right;
	int right = 0, left = 0;

	if (tree == NULL)
		return (0);

	cursor_left = tree;
	cursor_right = tree;

	right = binary_tree_height(cursor_right->right);
	left = binary_tree_height(cursor_left->left);

	return (left - right);
}
