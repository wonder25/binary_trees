#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node to the tree to measure
 * Return: The height of the binary tree, or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}
	return ((left_height > right_height) ? (left_height) : (right_height));
}
