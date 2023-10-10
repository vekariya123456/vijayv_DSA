#include <stdio.h>

int main() {
    int size, i, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the values for the array:\n");
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Swapping values of Array
    for (i = 0; i < size - 1; i++) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    printf("\nSwapped array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
   
