#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: If tree is NULL, return 0.
 * Otherwise, return the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t lefths = 0, righths = 0;

if (tree)
{
lefths = (tree->left ? binary_tree_height(tree->left) + 1 : 0);
righths = (tree->right ? binary_tree_height(tree->right) + 1 : 0);
}
return (lefths > righths ? lefths : righths);
}
