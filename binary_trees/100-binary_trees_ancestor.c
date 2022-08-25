#include "binary_trees.h"

/**
 * binary_tree_find_root - find the root of a binary tree
 * @node: a pointer to a binary tree node
 *
 * Return: a pointer to the root of the tree
 */
const binary_tree_t *binary_tree_find_root(const binary_tree_t *node)
{
const binary_tree_t *root = node;

if (node)
{
while ((node = node->parent))
root = node;
}
return (root);
}

/**
 * _binary_trees_ancestor - find the least common ancestor of two nodes
 * @root: a pointer to a subtree root
 * @n1: a pointer to a descendant
 * @n2: a pointer to a descendant
 *
 * Return: a pointer to the least common ancestor
 */
binary_tree_t *_binary_trees_ancestor(const binary_tree_t *root, const binary_tree_t *n1, const binary_tree_t *n2)
{
const binary_tree_t *lhs = NULL;
const binary_tree_t*rhs = NULL;

if (root)
{
if (root == n1 || root == n2)
return ((binary_tree_t *) root);

lhs = _binary_trees_ancestor(root->left, n1, n2);
rhs = _binary_trees_ancestor(root->right, n1, n2);

if (lhs && rhs)
return ((binary_tree_t *) root);
if (lhs)
return ((binary_tree_t *) lhs);
if (rhs)
return ((binary_tree_t *) rhs);
}
return (NULL);
}

/**
 * binary_trees_ancestor - find the least common ancestor of two nodes
 * @n1: a pointer to a node
 * @n2: a pointer to a node
 *
 * Return: a pointer to the least common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *n1, const binary_tree_t *n2)
{
const binary_tree_t *root1 = NULL;
const binary_tree_t *root2 = NULL;

if (n1 == n2)
return ((binary_tree_t *) n1);

root1 = binary_tree_find_root(n1);
root2 = binary_tree_find_root(n2);

if (root1 == root2)
return ((binary_tree_t *) _binary_trees_ancestor(root1, n1, n2));

return (NULL);
}
