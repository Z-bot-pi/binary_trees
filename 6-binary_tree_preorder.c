#include <stdlib.h>

/* binary tree node structure */
typedef struct binary_tree_s

 {
    int value;
    struct binary_tree_s *parent;
    struct binary_tree_s *right;
    struct binary_tree_s *left;
} binary_tree_t;

/* fxn for pre-order traversal of a binary tree */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)) {
    if (tree == NULL || func == NULL) 
{
        return;  //  NULL fxn or tree, do nothing
    }
    
    /* fxn for current node */
    func(tree->value);
    
    /*  left subtree,traverse */
    binary_tree_preorder(tree->left, func);
    
    /*  right subtree,traverse */
    binary_tree_preorder(tree->right, func);
}

