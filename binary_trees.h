#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stddef.h>

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

typedef struct binary_tree_s binary_tree_t;

/* print binary tree */
void binary_tree_print(const binary_tree_t *tree);

/* create binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* insert node as left child of other node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* insert node as right child of other node */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* deletes entire binary tree */
void binary_tree_delete(binary_tree_t *tree);



#endif
