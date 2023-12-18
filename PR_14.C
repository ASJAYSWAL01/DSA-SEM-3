#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to count the number of nodes in the linked list
int countNodes(struct Node* head) {
    // Check for an empty list
    if (head == NULL) {
        printf("LIST IS EMPTY\n");
        return 0;
    }

    int count = 1; // Initialize count to 1 for the first node
    struct Node* save = head;

    // Traverse the linked list to count nodes
    while (save->next != NULL) {
        save = save->next;
        count++;
    }

    return count;
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

    // Count the number of nodes and display the result
    int nodeCount = countNodes(head);
    printf("Number of nodes in the linked list: %d\n", nodeCount);

    return 0;
}
