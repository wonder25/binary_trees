#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 *
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);

}

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 *
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = binary_tree_sibling(node->parent);

	if (node == NULL)
		return (NULL);

	return (uncle);

}
