#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Left-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
    binary_tree_t *pivot, tmp;

    if (tree == NULL || tree->right == NULL)
        return (NULL);

    pivot = tree->right;
    tmp = pivot->left;
    pivot->left = tree;
    tree->right = tmp;
    if (tmp != NULL)
        tmp->parent = tree;
    tmp = tree->parent;
    tree->parent = pivot;
    pivot->parent = tmp;
    if (tmp != NULL)
    {
        if (tmp->right == tree)
            tmp->right = pivot;

        tmp->left = pivot;
    }

    return (pivot);
}
