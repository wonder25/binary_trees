#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 *
 * @parent: Pointer to the parent node of the new node
 * @value: Value to store in new node
 *
 * Return: Pointer to the new created node, or NULL if fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* new node var */
	binary_tree_t *new_node;
	/* memory allocate */
	new_node = malloc(sizeof(binary_tree_t));
	/* mem check */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* sets values for new_node */
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	/* return pointer to new_node */
	return (new_node);
}
