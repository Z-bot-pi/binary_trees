#include <stdlib.h>

/* binary tree node structure*/
typedef struct binary_tree_s {
    int value;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* create a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    /* new node memory */
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL) {
        return NULL;  // Return NULL  to failure
    }
    
    /* Initialize new node */
    new_node->value = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;
    
    return new_node;  
}

/* Example usage:
int main() {
    // create binary tree node with value of 5 , no parent
    binary_tree_t *node = binary_tree_node(NULL, 5);
    
    // if creation of node got successfull
    if (node == NULL) {
        printf("Failed to create a binary tree node\n");
        return 1;
    }
    
    // print created node value
    printf("Value of the node: %d\n", node->value);
    
    // Free the memory node allocation
    free(node);
    
    return 0;
}
*/
