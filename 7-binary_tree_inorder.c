#include "binary_trees.h"

/**
 * binary_tree_inorder - Iterates a tree in in-order traversal.
 * @tree: The pointer to the root node of the tree to traverse.
 * @func: The pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	binary_tree_inorder(tree->left, func);
	(*func)(tree->n);
	binary_tree_inorder(tree->right, func);
}
