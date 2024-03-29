#include <stdlib.h>


/* Function inserts a node as the left-child of another node */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL) 
    {
        return NULL;  // Cannot insert if parent is NULL
    }
    
    /* Creates new node with given value */
    binary_tree_t *new_node = binary_tree_node(parent, value);
    if (new_node == NULL)

    {
        return NULL;  // Return NULL when there's failure for creating new node
    }
    
    /* If theres already a left child, update the left child */
    if (parent->left != NULL)
    {
        parent->left->parent = new_node;
        new_node->left = parent->left;
    }
    
    /* Sets new node to be the left child */
    parent->left = new_node;
    
    return (new_node);  // Return a pointer to the created node
}
