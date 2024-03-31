#include "binary_trees.h"

/**
 * binary_tree_depth - Computes the depth of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth;

	if (tree == NULL)
	{
		return (0); /* If tree is NULL, height is 0 */
	}
	tree_depth = binary_tree_depth(tree->parent);
	if (tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		return (tree_depth + 1);
	}
}
