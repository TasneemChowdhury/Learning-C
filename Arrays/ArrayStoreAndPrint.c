/*
1. Array Store & Print
Write a program in C to store elements in an array and print them.
Test Data:
Input 10 elements in the array:
element - 0: 1
element - 1: 1
element - 2: 2
...
element - n: x

Expected Output:
Elements in array are: 1 1 2 3 4 5 6 7 8 9
*/

// Solution
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;
    printf("Input %d elements in the array\n", n);
    // (int*) is not necessary in C (more used in C++) but its there because malloc 
    // returns a generic pointer, so we type cast the value to be an int pointer
    int *dynamic_array = (int*) malloc(sizeof(int)*n);

    if (dynamic_array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &dynamic_array[i]); // Avoid segmentation fault from not putting '&'.
    }
    printf("Elements in array are: ");
    for (int i = 0; i < n; i++) {
       printf("%d ", dynamic_array[i]);
    }
    printf("\n");
    // It's important to always free the memory when you are done using it.
    free(dynamic_array);
    return 0;
}