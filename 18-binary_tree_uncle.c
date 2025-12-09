#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a node
 * @node: Pointer to the node with an uncle
 *
 * Return: Pointer to the uncle node, or NULL if anyone exists
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	node = node->parent;

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
