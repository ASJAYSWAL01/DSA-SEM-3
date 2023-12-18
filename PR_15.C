#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to search for a node with value X in the linked list
void searchNode(struct Node* head, int target) {
    // Check for an empty list
    if (head == NULL) {
        printf("LIST IS EMPTY AND UNDERFLOW\n");
        return;
    }

    int pos = 1;
    struct Node* save = head;

    // Search for the target node
    while (save != NULL && save->data != target) {
        save = save->next;
        pos++;
    }

    // Check if the target node is found or not
    if (save != NULL && save->data == target) {
        printf("Node is found at position: %d\n", pos);
    } else {
        printf("Node is not found in the list\n");
    }
}

// Function to create a new node
struct Node* getNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Driver function
int main() {
    struct Node* head = NULL;

    // Creating nodes for the linked list
    head = getNode(1);
    head->next = getNode(2);
    head->next->next = getNode(3);
    head->next->next->next = getNode(4);
    head->next->next->next->next = getNode(5);

    int target = 3;

    // Search for the target node in the linked list
    searchNode(head, target);

    return 0;
}
