#include "binary_trees.h"
#include <math.h>

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
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: size_t height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);

/*
 *        if (tree->left == NULL && tree->right == NULL)
 *               return (0);
*/
        return (max(binary_tree_height(tree->left),
                binary_tree_height(tree->right)) + 1);
}

/**
 * power - manual pow function
 * @exponent: exponent
 *
 * Return: Returns a to the power of b
*/

int power(int exponent)
{
	int result = 1;

	if (exponent == 0)
		return (0);

	while (exponent != 0)
	{
		result *= 2;
		exponent--;
	}

	return (result);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node of the tree
 *
 * Return: 1 if perfect, 0 if not
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leaves;
	int height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* otherwise, count number of leaves */
	/* calculate 2 to the depth */
	/* if it's equal to number of leaves, then it's perfect */

	leaves = binary_tree_leaves(tree);
	height = binary_tree_height(tree) - 1;
	if (leaves == power(height))
		return (1);

	return (0);
}
