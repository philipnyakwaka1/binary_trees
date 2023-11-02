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
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL || parent == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	return (new_node);
}
