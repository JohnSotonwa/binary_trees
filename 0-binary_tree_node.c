#include "binary_trees.h"
/**
 * @brief 
 * 
 * @param parent 
 * @param value 
 * @return binary_tree_t* 
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = NULL;
    node = malloc(sizeof(binary_tree_t));
    
    if (node)
    {
        node->n = value;
        node->parent = parent;
        node->left = NULL;
        node->right = NULL;
    }
    return(node);
}