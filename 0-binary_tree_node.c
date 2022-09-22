#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree
 * @parent: pointer to the parent node
 * @value: (int) value to put in node
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	tree = malloc(sizeof(binary_tree_t));

	if (tree == NULL)
		return (NULL);

	tree->parent = parent;
	tree->n = value;
	tree->left = NULL;
	tree->right = NULL;


	return (tree);
}