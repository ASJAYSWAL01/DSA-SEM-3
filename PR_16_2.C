#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to delete the last node in the linked list
struct Node* deleteLastNode(struct Node* head) {
    // Check for an empty list
    if (head == NULL) {
        printf("LIST IS EMPTY AND UNDERFLOW\n");
        return NULL;
    }

    struct Node* save = head;
    struct Node* pred = NULL;

    // Traverse to find the last node and its predecessor
    while (save->next != NULL) {
        pred = save;
        save = save->next;
    }

    // Only one node in the list
    if (pred == NULL) {
        free(head);
        return NULL;
    } else {
        pred->next = NULL;
        free(save);
        return head;
    }
}

// Function to create a new node
struct Node* getNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Driver function
int main() {
    struct Node* head = NULL;

    // Creating nodes for the linked list
    head = getNode(1);
    head->next = getNode(2);
    head->next->next = getNode(3);
    head->next->next->next = getNode(4);

    printf("Linked list before deletion: ");
    printList(head);

    // Delete the last node in the linked list
    head = deleteLastNode(head);

    printf("Linked list after deletion of last node: ");
    printList(head);

    return 0;
}
