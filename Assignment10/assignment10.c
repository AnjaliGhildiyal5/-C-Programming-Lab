#include <stdio.h>

int main() {
    int a[100], n, i, j, choice, temp, key;
    int largest, secondLargest, smallest, secondSmallest;
    int found;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    do {
        printf("\n===== ARRAY CHALLENGE =====\n");
        printf("1. Display Array\n");
        printf("2. Largest and Second Largest\n");
        printf("3. Smallest and Second Smallest\n");
        printf("4. Reverse Array\n");
        printf("5. Remove Duplicates\n");
        printf("6. Count Frequency\n");
        printf("7. Search Element\n");
        printf("8. Sort Array (Ascending)\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Array Elements: ");
            for(i = 0; i < n; i++)
                printf("%d ", a[i]);
            printf("\n");
            break;

        case 2:
            largest = secondLargest = a[0];

            for(i = 1; i < n; i++) {
                if(a[i] > largest) {
                    secondLargest = largest;
                    largest = a[i];
                }
                else if(a[i] > secondLargest && a[i] != largest) {
                    secondLargest = a[i];
                }
            }

            printf("Largest = %d\n", largest);
            printf("Second Largest = %d\n", secondLargest);
            break;

        case 3:
            smallest = secondSmallest = a[0];

            for(i = 1; i < n; i++) {
                if(a[i] < smallest) {
                    secondSmallest = smallest;
                    smallest = a[i];
                }
                else if(a[i] < secondSmallest && a[i] != smallest) {
                    secondSmallest = a[i];
                }
            }

            printf("Smallest = %d\n", smallest);
            printf("Second Smallest = %d\n", secondSmallest);
            break;

        case 4:
            printf("Reversed Array: ");
            for(i = n - 1; i >= 0; i--)
                printf("%d ", a[i]);
            printf("\n");
            break;

        case 5:
            for(i = 0; i < n; i++) {
                for(j = i + 1; j < n; ) {
                    if(a[i] == a[j]) {
                        for(int k = j; k < n - 1; k++)
                            a[k] = a[k + 1];
                        n--;
                    } else {
                        j++;
                    }
                }
            }

            printf("Array after removing duplicates:\n");
            for(i = 0; i < n; i++)
                printf("%d ", a[i]);
            printf("\n");
            break;

        case 6:
            printf("Frequency of Elements:\n");
            for(i = 0; i < n; i++) {
                found = 0;

                for(j = 0; j < i; j++) {
                    if(a[i] == a[j]) {
                        found = 1;
                        break;
                    }
                }

                if(!found) {
                    int count = 1;
                    for(j = i + 1; j < n; j++) {
                        if(a[i] == a[j])
                            count++;
                    }
                    printf("%d = %d times\n", a[i], count);
                }
            }
            break;

        case 7:
            printf("Enter element to search: ");
            scanf("%d", &key);

            found = 0;
            for(i = 0; i < n; i++) {
                if(a[i] == key) {
                    printf("Element found at position %d\n", i + 1);
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Element not found.\n");
            break;

        case 8:
            for(i = 0; i < n - 1; i++) {
                for(j = 0; j < n - i - 1; j++) {
                    if(a[j] > a[j + 1]) {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }
            }

            printf("Sorted Array:\n");
            for(i = 0; i < n; i++)
                printf("%d ", a[i]);
            printf("\n");
            break;

        case 9:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 9);

    return 0;
}