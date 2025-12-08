#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put inside the new node
 *
 * Return: A pointer to the new node or NULL if it failed
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	
	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);
	
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	
	return (node);
}
