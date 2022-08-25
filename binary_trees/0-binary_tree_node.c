#include <stdlib.h>
#include "binary_trees.h"

/**
 *
 * Function to create a binary tree
 *
 * @parent is a pointer to the node created
 * @value is the value to put in the new node
 *
 * Node is created without a child
 *
 *
 * Return: pointer or Null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new = calloc(1, sizeof(*new));

if (new)
if (new)
{
new->n = value;
new->parent = parent;
}
return (new);
}
