#include <stdlib.h>

/* binary tree node structure */
typedef struct binary_tree_s {
    int value;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Fxn for deleting binary tree */
void binary_tree_delete(binary_tree_t *tree) {
    if (tree == NULL) {
        return;  // If tree is NULL, do nothing
    }
    
    /* Del left subtree */
    binary_tree_delete(tree->left);
    
    /* Del right subtree */
    binary_tree_delete(tree->right);
    
    /* Free memory allocated for current node */
    free(tree);
}


