#include <stdlib.h>

/* binary tree node Structure */
typedef struct binary_tree_s 

{
    int value;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/*  check if node is a root */
int binary_tree_is_root(const binary_tree_t *node) 

{
    if (node == NULL) {
        return 0;  // If node is NULL, return 0
    }
    
    /*  if node has no parent */
    if (node->parent == NULL) {
        return 1;  // when node is a root
    } else {
        return 0;  // when node is not a root
    }
}

