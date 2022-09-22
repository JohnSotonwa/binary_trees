#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the right-child of another node
 *
 * @parent: pointer to the parent node of the node to insert the right-child in
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
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
        parent->left->parent = ptr; //then place the new node (together with its left child) under the parent
    }
    parent->left = ptr;
    return(ptr);
}
