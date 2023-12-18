#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the BST
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
    if (node == NULL) return newNode(data);

    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);

    return node;
}

// Function to perform pre-order traversal
void preorder(struct node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Function to perform in-order traversal
void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Function to perform post-order traversal
void postorder(struct node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct node *root = NULL;
    int keys[] = {58, 40, 35, 12, 30};
    int n = sizeof(keys) / sizeof(keys[0]);

    // Inserting elements into the BST
    for (int i = 0; i < n; i++)
        root = insert(root, keys[i]);

    printf("Pre-order traversal: ");
    preorder(root);
    printf("\n");

    printf("In-order traversal: ");
    inorder(root);
    printf("\n");

    printf("Post-order traversal: ");
    postorder(root);
    printf("\n");

    return 0;
}
