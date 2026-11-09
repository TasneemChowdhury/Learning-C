/*
2. Array Reverse Display
Write a program in C to read n number of values in an array and display them in reverse order.
Test Data:
Input the number of elements in the array: '3'
Input '3' number of elements in the array:
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output:
The values stored into the array are:
2 5 7
The values stored into the array in reverse are:
7 5 2
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array:\n", n);
    int *dynamic_array = malloc(sizeof(int)*n);

    if (dynamic_array == NULL) {
        printf("Error");
        return 1;
    }
    // Dynamically filling the array
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &dynamic_array[i]);
    }
    printf("\n");

    printf("The values stored into the array are: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", dynamic_array[i]);
    }

    // Reversing the array
    printf("\nThe values stored into the array in reverse are: \n");
    for (int i = 0; i < n; i++) {
        int temp;
        if (i <= n/2) {
            int temp = dynamic_array[i];
            dynamic_array[i] = dynamic_array[n - 1 - i];
            dynamic_array[n - 1 - i] = temp;
        }
        printf("%d ", dynamic_array[i]);
    }

    free(dynamic_array);
    return 0;
}