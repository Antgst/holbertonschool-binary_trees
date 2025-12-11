#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;
	size_t nodes;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	nodes = binary_tree_nodes(tree) + binary_tree_leaves(tree);

	if ((size_t)((1 << (height + 1)) - 1) == nodes)
		return (1);

	return (0);
}
