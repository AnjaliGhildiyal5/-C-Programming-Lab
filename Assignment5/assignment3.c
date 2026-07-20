#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1 = 10, num2 = 20;
    int *ptr;
    int arr[] = {5, 10, 15, 20, 25};
    int i;

    // Pointer to num1
    ptr = &num1;

    // Display memory address and value
    printf("=== Memory Address and Dereferencing ===\n");
    printf("Value of num1 = %d\n", num1);
    printf("Address of num1 = %p\n", (void *)&num1);
    printf("Pointer stores = %p\n", (void *)ptr);
    printf("Value using pointer = %d\n", *ptr);

    // Swap using pointers
    printf("\n=== Swapping Two Numbers Using Pointers ===\n");
    printf("Before Swap: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After Swap: num1 = %d, num2 = %d\n", num1, num2);

    // Array traversal using pointers
    printf("\n=== Array Traversal Using Pointers ===\n");
    ptr = arr;

    for (i = 0; i < 5; i++)
    {
        printf("Element %d = %d\n", i, *(ptr + i));
    }

    // Pointer arithmetic
    printf("\n=== Pointer Arithmetic ===\n");
    ptr = arr;

    for (i = 0; i < 5; i++)
    {
        printf("Address: %p\tValue: %d\n", (void *)ptr, *ptr);
        ptr++;
    }

    return 0;
}