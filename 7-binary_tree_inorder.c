#include <stdlib.h>

/*  binary tree node structure */
typedef struct binary_tree_s {
    int value;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/*  in-order traversal of a binary tree fxn */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))

 {
    if (tree == NULL || func == NULL) {
        return;  // If tree or func is NULL, do nothing
    }
    
    /*  left subtree traverse */
    binary_tree_inorder(tree->left, func);
    
    /*fxn for the current node */
    func(tree->value);
    
    /* the right subtree,traverse */
    binary_tree_inorder(tree->right, func);
}


