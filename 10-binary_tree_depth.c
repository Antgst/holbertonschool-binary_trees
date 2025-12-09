#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: pointer to the node to measure
*
* Description: Returns the depth of the node in the tree. The depth
* is defined as the number of edges from the node to the root node.
* Returns 0 if tree is NULL.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
		size_t depth;

		if (tree == NULL)
		return (0);

		depth = 0;
		while (tree->parent != NULL)
		{
			tree = tree->parent;
			depth++;
		}

		return (depth);
}
