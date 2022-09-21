#include <stdlib.h>
#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    root = binary_tree_node(NULL, 98);
    binary_tree_print(root);
    return (0);
}