#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Function to create a new node
struct node *newNode(int item) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Function to insert a new node in the BST
struct node *insert(struct node *node, int data) {
    if (node == NULL)
        return newNode(data);

    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);

    return node;
}

// Function to search for a key in the BST
struct node *BST_SEARCH(struct node *root, int key) {
    // Check for empty tree or if the key matches the root node's data
    if (root == NULL || root->data == key)
        return root;

    // Search in left or right subtree based on the key
    if (key < root->data)
        return BST_SEARCH(root->left, key);
    else
        return BST_SEARCH(root->right, key);
}

int main() {
    struct node *root = NULL;
    int keys[] = {58, 40, 35, 12, 30};
    int n = sizeof(keys) / sizeof(keys[0]);

    // Inserting elements into the BST
    for (int i = 0; i < n; i++)
        root = insert(root, keys[i]);

    int searchKey = 35;
    struct node *result = BST_SEARCH(root, searchKey);

    if (result != NULL)
        printf("Key %d is found in the BST!\n", searchKey);
    else
        printf("Key %d is not found in the BST!\n", searchKey);

    return 0;
}
