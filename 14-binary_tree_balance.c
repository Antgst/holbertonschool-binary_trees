#include "binary_trees.h"

/**
 * binary_tree_height - function that measure the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * binary_tree_balance - Measure the balance of a binary tree
 * @tree: Pointer to the root of the tree
 *
 * Return: The balance factor, or 0 if the tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);

	left = binary_tree_balance(tree->left);
	right = binary_tree_balance(tree->right);

	return (left - right);

}
