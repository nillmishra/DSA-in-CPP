#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid; // Return the index where the target is found
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1; // Return -1 if the target is not found
}

int main(){
    int mySortedArray[] = {1, 2, 3, 4, 5};
    int targetElement = 3;
    int result = binary_search(mySortedArray, 5, targetElement);
    
    if (result != -1) {
        printf("Element %d found at index %d\n", targetElement, result);
    } else {
        printf("Element %d not found\n", targetElement);
    }
    
    return 0;
}
