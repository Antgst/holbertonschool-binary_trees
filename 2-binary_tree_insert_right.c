<<<<<<< HEAD
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Description: Creates a new node and inserts it as the right child of
 * the parent node. If the parent already has a right child, the new
 * node replaces it and the old right child becomes the right child of
 * the new node.
 *
 * Return: Pointer to the newly created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
=======
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child of another one
 * @parent: pointer to the node to insert the right-child in
 * @value: value store in the new node
 *
 * Return: Pointer to the created node,
 * or NULL if it failed, or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}

	parent->right = node;

	return (node);
}
>>>>>>> 7e53d1fd2e6a49d49e994cb9e700e6326c7721df
