#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node to the right child
 * @parent: Pointer to the parent node to insert the right child
 * @value: Value to be stored in the new node
 * Return: Pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
	{
		return (NULL);
	}

	right_child = malloc(sizeof(binary_tree_t));
	if (right_child == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		/* set values for right child members */
		right_child->parent = parent;
		right_child->right = NULL;
		right_child->left = NULL;
		right_child->n = value;
	}
	else
	{
		right_child->parent = parent;
		parent->right->parent = right_child;
		right_child->right = parent->right;
		right_child->left = NULL;
		right_child->n = value;
	}
	parent->right = right_child;
	return (right_child);
}
