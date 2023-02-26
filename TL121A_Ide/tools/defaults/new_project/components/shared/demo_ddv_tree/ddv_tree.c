#include <stdlib.h>
#include "labels.h"

struct TreeNode {
    struct TreeNode *left, *right;
    int data;
};

/* Create a node */
struct TreeNode* CreateNewNode(int data)
{
    struct TreeNode* newNode = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->data = data;

    return newNode;
}

/* Destroy a node */
void Destroy(struct TreeNode* node)
{
    if (node->left) {
	Destroy(node->left);
    }
    if (node->right) {
	Destroy(node->right);
    }
    free(node);
}

/* Insert a node into the tree */
void Insert(struct TreeNode* current, int newData)
{
    if (newData < current->data) {
	if (current->left) {
	    Insert(current->left, newData);
	} else {
	    current->left = CreateNewNode(newData);
	}
    } else if (newData > current->data) {
	if (current->right) {
	    Insert(current->right, newData);
	} else {
	    current->right = CreateNewNode(newData);
	}
    } else {
	/* do nothing, this is a duplicate node */
    }
}

int main(int argc, char** argv)
{
    struct TreeNode* root = CreateNewNode(5);
    Insert(root, 3);
    Insert(root, 4);
    Insert(root, 8);
    Insert(root, 6);
    Insert(root, 9);
    Insert(root, 10);
    Insert(root, 1);

ViewTree:
    Destroy(root);

    return 0;
}
