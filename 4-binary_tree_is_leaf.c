#include <stdlib.h>

/*  binary tree node structure */
typedef struct binary_tree_s 

{
    int value;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/*check if a node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *node)

 {
    if (node == NULL) {
        return 0;  // If node is NULL, return 0
    }
    
    /* Check if the node has no left and right children */
    if (node->left == NULL && node->right == NULL)

   {
        return 1;  // Node is a leaf
    } else {
        return 0;  // Node is not a leaf
    }
}

