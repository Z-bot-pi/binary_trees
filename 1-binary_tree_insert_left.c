#include <stdlib.h>

/* Structure for the binary tree node */
typedef struct binary_tree_s {
    int value;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function to create a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    /* Allocate memory for the new node */
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL) {
        return NULL;  // Return NULL on failure
    }
    
    /* Initialize the new node */
    new_node->value = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;
    
    return new_node;  // Return a pointer to the new node
}

/* Function to insert a node as the left-child of another node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
    if (parent == NULL) {
        return NULL;  // Cannot insert if parent is NULL
    }
    
    /* Create a new node with the given value */
    binary_tree_t *new_node = binary_tree_node(parent, value);
    if (new_node == NULL) {
        return NULL;  // Return NULL on failure to create the new node
    }
    
    /* If parent already has a left child, update its left child */
    if (parent->left != NULL) {
        parent->left->parent = new_node;
        new_node->left = parent->left;
    }
    
    /* Set the new node as the left child of the parent */
    parent->left = new_node;
    
    return new_node;  // Return a pointer to the created node
}
