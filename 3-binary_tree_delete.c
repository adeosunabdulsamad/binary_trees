#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: A pointer to the root node of the tree to delete
 *
 * Description: The function deletes all nodes in the binary tree pointed toby
 * `tree`, along with their children, using a post-order traversal.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
