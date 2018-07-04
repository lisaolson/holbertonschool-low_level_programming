#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node of the tree
 *
 * Return: 1 if perfect, 0 if not
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
                return (1);

        return (max(binary_tree_height(tree->left), binary_tree_height(tree->right)) + 1);

}

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

int binary_tree_is_full(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);

        if (tree->right == NULL && tree->left == NULL)
                return (1);

        if (tree->right != NULL && tree->left != NULL)
        {
                return (binary_tree_is_full(tree->left) &&
                        binary_tree_is_full(tree->right));
        }

        return (0);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
		return (1);

	return (0);
}