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

    if (parent)
    {
        ptr = binary_tree_node(parent, value);
        if (parent->left)
        {
            ptr->left = parent->left;
        }
        parent->left = ptr;
    }

    return(ptr);
}
