#include "binary_trees.h"

/**
 * binary_tree_preorder - Applies a function to each node in preorder traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to apply to each node's value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n); /* Apply the function to the current node's value */
	binary_tree_preorder(tree->left, func); /* Recur on the left subtree */
	binary_tree_preorder(tree->right, func); /* Recur on the right subtree */
}
