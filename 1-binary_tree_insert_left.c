#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node at the left-child of
 * another node. If a left-child exists then it replaces it
 * and the left-child becomes the new node's left-child
 * @parent: node to insert left child
 * @value: value of inserted left child
 * Return: a pointer to the created node, or NULL on
 * failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = new;
		new->left = parent->left;
		parent->left = new;
		return (new);
	}
	parent->left = new;
	return (new);
}
