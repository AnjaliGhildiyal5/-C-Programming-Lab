#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *marks;
    int highest, lowest, total = 0;
    float average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dymc allocation
    marks = (int *)malloc(n * sizeof(int));

    if (marks == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    // Display 
    printf("\nMarks of Students:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d : %d\n", i + 1, marks[i]);
    }

    
    highest = lowest = marks[0];

    for (i = 0; i < n; i++) {
        total += marks[i];

        if (marks[i] > highest)
            highest = marks[i];

        if (marks[i] < lowest)
            lowest = marks[i];
    }

    average = (float)total / n;

    printf("\nStatistics:\n");
    printf("Highest Marks = %d\n", highest);
    printf("Lowest Marks = %d\n", lowest);
    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);

    // Free allocated memory
    free(marks);
    printf("\nMemory released successfully.\n");

    return 0;
}