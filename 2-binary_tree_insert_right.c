#include <stdlib.h>

typedef struct binary_tree_s
 {
    int value;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    /* Allocate memory for the new node */
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL) {
        return NULL;  // Return NULL on failure
    }
    
    /* new node */
    new_node->value = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;
    
    return new_node;  // Return a pointer }

/*  insert a node as the right-child of another node */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)

 {
    if (parent == NULL)
 {
        return NULL; }
    
    /* new node with the given value */
    binary_tree_t *new_node = binary_tree_node(parent, value);
    if (new_node == NULL)

 {
        return NULL;  // Return NULL on failure 
    }
    

    /* If parent already has a right child, update its right child */
    if (parent->right != NULL) 

{
        parent->right->parent = new_node;
        new_node->right = parent->right;
    }
    
    /* Set the new node as the right child of the parent */
    parent->right = new_node;
    
    return new_node;  // Return a pointer to a created node
}
