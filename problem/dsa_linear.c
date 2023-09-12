#include <stdio.h>

int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index where the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int targetElement = 3;
    int result = linear_search(myArray, 5, targetElement);
    
    if (result != -1) {
        printf("Element %d found at index %d\n", targetElement, result);
    } else {
        printf("Element %d not found\n", targetElement);
    }
    
    return 0;
}
