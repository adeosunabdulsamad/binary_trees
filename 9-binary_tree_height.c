#include "binary_trees.h"

/**
 * max - Computes the maximum of two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The maximum of the two integers
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - Computes the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0); /* If tree is NULL, height is 0 */
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (tree->right == NULL && tree->left == NULL)
	{
		return (0); /* Return the maximum height plus 1 */
	}
	else
	{
		return (max(left_height, right_height) + 1);
	}
}
