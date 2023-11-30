binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
    binary_tree_t *pivot, *tmp;

    if (tree == NULL || tree->left == NULL)
        return (NULL);

    pivot = tree->right;
    tmp = pivot->left;
    pivot->left = tree;
    tree->left = tmp;
    if (tmp != NULL)
        tmp->parent = tree;
    tmp = tree->parent;
    tree->parent = pivot;
    pivot->parent = tmp;
    if (tmp != NULL)
    {
        if (tmp->left == tree)
            tmp->left = pivot;
        else
            tmp->right = pivot;
    }

    return (pivot);
}
