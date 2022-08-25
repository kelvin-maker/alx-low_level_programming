#include "binary_trees.h"

/**
 * binary_tree_rotate_left - perform a left-rotation on a binary tree
 * @tree: the tree to rotate
 *
 * Return: a pointer to the new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *node = NULL;
if (tree)
{
node = tree->right;
if (node)
{
tree->right = node->left;
if (tree->right)
tree->right->parent = tree;
node->left = tree;
node->parent = tree->parent;
tree->parent = node;
}
}
return (node);
}
