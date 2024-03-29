#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: A pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the node, or NULL on failure or if parent is NULL
 *         If parent has a right-child, the new node must take its place,
 *         and the old right-child is set as the right-child of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL); /* Cannot insert a node without a parent */

	/* Create a new node */
	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL); /* Failed to create a new node */

	/* If the parent has right child,moveto the right child of the new node */
	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}

	/* Set the new node as the right child of the parent */
	parent->right = newNode;

	return (newNode);
}
