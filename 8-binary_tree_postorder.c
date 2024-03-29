#include "binary_trees.h"

/**
 * binary_tree_postorder - Applies a func to each node in postorder traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to apply to each node's value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func); /*  on the left subtree */
	binary_tree_postorder(tree->right, func); /*  on the right subtree */
	func(tree->n); /* Apply the function to the current node's value */
}
