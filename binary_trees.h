#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
=======
#include <stdlib.h>
#include <stdio.h>
>>>>>>> 70b3c44cf72265e47eec719b533ec92b43e36482

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
<<<<<<< HEAD
typedef struct binary_tree_s binary_tree_t;
=======
>>>>>>> 70b3c44cf72265e47eec719b533ec92b43e36482

typedef struct binary_tree_s binary_tree_t;
void binary_tree_print(const binary_tree_t *);

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
<<<<<<< HEAD
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
=======
>>>>>>> 70b3c44cf72265e47eec719b533ec92b43e36482

#endif /* _BINARY_TREES_H_ */
