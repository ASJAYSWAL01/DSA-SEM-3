#include <stdio.h>

int main() {
    int arr[10]; 
    int key;

    printf("Enter 10 elements for the array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]); 
    }

    printf("Enter the key to search for: ");
    scanf("%d", &key);

    int found = 0; 

    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            printf("Search successful\n"); 
            found = 1; 
            break; 
        }
    }

    if (!found) {
        printf("Search unsuccessful\n"); 
    }

    return 0; 
}