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
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL || parent == NULL)
		return (NULL);
	new_node->n = value;
	new_node->right = parent->right;
	new_node->left = NULL;
	new_node->parent = parent;

	parent->right = new_node;
	if (new_node->right)
		new_node->right->parent = new_node;
	return (new_node);
}
