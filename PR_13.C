#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* getNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node in a sorted linked list
struct Node* insertInSorted(struct Node* head, int data) {
    struct Node* newNode = getNode(data);
    struct Node* save = head;
    struct Node* pred = NULL;

    // Check if the list is empty or new node has to be inserted at the beginning
    if (head == NULL || head->data >= data) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    // Traverse the list to find the correct position for insertion
    while (save != NULL && save->data < data) {
        pred = save;
        save = save->next;
    }

    // Insert the new node at the correct position
    newNode->next = save;
    pred->next = newNode;

    return head;
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

    // Insert nodes in sorted order
    head = insertInSorted(head, 5);
    head = insertInSorted(head, 10);
    head = insertInSorted(head, 7);
    head = insertInSorted(head, 3);
    head = insertInSorted(head, 8);

    printf("Linked list after insertion: ");
    printList(head);

    return 0;
}
