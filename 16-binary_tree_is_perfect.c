#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height of the binary tree, or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* variables to store height */
	size_t left_height = 0;
	size_t right_height = 0;

	/* NULL check for tree */
	if (tree == NULL)
	{
		return (0);
	}

	/* NULL check for left-child */
	if (tree->left != NULL)
		/* Add 1 to height and recursively call func */
		left_height = 1 + binary_tree_height(tree->left);

	/* NULL check for right-child */
	if (tree->right != NULL)
		/* Add 1 to height and recursively call func */
		right_height = 1 + binary_tree_height(tree->right);

	/* Select longest path */
	return ((left_height > right_height) ? (left_height) : (right_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftSide, rightSide, leftHeight, rightHeight;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->right == NULL || tree->left == NULL)
		return (0);

	leftSide = binary_tree_is_perfect(tree->left);
	rightSide = binary_tree_is_perfect(tree->right);
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if ((leftSide && rightSide) && (leftHeight == rightHeight))
		return (1);
	else
		return (0);

}
