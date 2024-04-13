#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node at the right-child of
 * another node. If a right-child exists then it replaces it
 * and the right-child becomes the new node's right-child
 * @parent: node to insert right child
 * @value: value of inserted right child
 * Return: a pointer to the created node, or NULL on
 * failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		parent->right->parent = new;
		new->right = parent->right;
		parent->right = new;
		return (new);
	}
	parent->right = new;
	return (new);
}
