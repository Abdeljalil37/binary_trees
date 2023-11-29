#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
<<<<<<< HEAD
 * @parent: is a pointer to the node to insert the left-child in.
 * @value: is the value to store in the new node.
=======
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
>>>>>>> 765ed3b05b499ba42f7c5fcbd76e5e3f41aa4d1f
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
<<<<<<< HEAD
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_node(parent, value));

	if (!parent)
		return (NULL);

	if (!new_node)
=======

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
>>>>>>> 765ed3b05b499ba42f7c5fcbd76e5e3f41aa4d1f
		return (NULL);

	if (parent->left != NULL)
	{
<<<<<<< HEAD
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
=======
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
>>>>>>> 765ed3b05b499ba42f7c5fcbd76e5e3f41aa4d1f
}
