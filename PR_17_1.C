#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Function to print data by traversing the left nodes
void printData(struct node *root) {
    struct node *ptr = root;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->left;
    }
}

int main() {
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root->data = 58;
    root->left = NULL;
    root->right = NULL;

    struct node *lc1 = (struct node *)malloc(sizeof(struct node));
    lc1->data = 40;
    lc1->left = NULL;
    lc1->right = NULL;
    root->left = lc1;

    struct node *lc2 = (struct node *)malloc(sizeof(struct node));
    lc2->data = 35;
    lc2->left = NULL;
    lc2->right = NULL;
    lc1->left = lc2;

    struct node *lc3 = (struct node *)malloc(sizeof(struct node));
    lc3->data = 12;
    lc3->left = NULL;
    lc3->right = NULL;
    lc2->left = lc3;

    struct node *rc = (struct node *)malloc(sizeof(struct node));
    rc->data = 30;
    rc->left = NULL;
    rc->right = NULL;
    lc3->left = rc;

    printData(root);

    return 0;
}
