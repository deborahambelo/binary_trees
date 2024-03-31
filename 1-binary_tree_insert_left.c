#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->right = NULL;

	temp = parent->left;
	parent->left = new;

	if (temp != NULL)
	{
		new->left = temp;
		temp->parent = new;
	}
	else
		new->left = NULL;

	return (new);
}
