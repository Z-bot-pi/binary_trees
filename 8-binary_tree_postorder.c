#include <stdlib.h>

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    /*  left subtree,traverse */
    binary_tree_postorder(tree->left, func);

    /* right subtree,traverse */
    binary_tree_postorder(tree->right, func);

    /*  the current node fxn */
    func(tree->value);
}

