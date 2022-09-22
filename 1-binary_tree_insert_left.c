#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *ptr = NULL;
    ptr = malloc(sizeof(binary_tree_t));
    ptr = binary_tree_node(parent, value)
    /*{
        node->parent
        node->left=NULL
        node->n
        node->right=NULL
    }*/;
    if (parent->left) //if this node already has a left child then:
    {
        ptr->left = parent->left; //put the left child of this parent as the new left child of ptr node
        //parent->left->parent = ptr; //then place the new node (together with its left child) under the parent
    }
    parent->left = ptr;
    return(ptr);
}
