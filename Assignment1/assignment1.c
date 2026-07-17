#include <stdio.h>

int main() {
    int n, i, j, choice, key, temp;
    int marks[100];
    int highest, lowest;
    int total;
    float average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    do {
        printf("\n===== Student Marks Analyzer =====\n");
        printf("1. Display Marks\n");
        printf("2. Highest Marks\n");
        printf("3. Lowest Marks\n");
        printf("4. Total and Average\n");
        printf("5. Search Marks\n");
        printf("6. Sort Marks (Ascending)\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nMarks of Students:\n");
            for (i = 0; i < n; i++) {
                printf("Student %d : %d\n", i + 1, marks[i]);
            }
            break;

        case 2:
            highest = marks[0];
            for (i = 1; i < n; i++) {
                if (marks[i] > highest)
                    highest = marks[i];
            }
            printf("Highest Marks = %d\n", highest);
            break;

        case 3:
            lowest = marks[0];
            for (i = 1; i < n; i++) {
                if (marks[i] < lowest)
                    lowest = marks[i];
            }
            printf("Lowest Marks = %d\n", lowest);
            break;

        case 4:
            total = 0;
            for (i = 0; i < n; i++) {
                total += marks[i];
            }
            average = (float)total / n;
            printf("Total Marks = %d\n", total);
            printf("Average Marks = %.2f\n", average);
            break;

        case 5:
            printf("Enter marks to search: ");
            scanf("%d", &key);

            for (i = 0; i < n; i++) {
                if (marks[i] == key) {
                    printf("Marks found for Student %d\n", i + 1);
                    break;
                }
            }

            if (i == n)
                printf("Marks not found.\n");
            break;

        case 6:
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (marks[j] > marks[j + 1]) {
                        temp = marks[j];
                        marks[j] = marks[j + 1];
                        marks[j + 1] = temp;
                    }
                }
            }

            printf("Marks in Ascending Order:\n");
            for (i = 0; i < n; i++) {
                printf("%d ", marks[i]);
            }
            printf("\n");
            break;

        case 7:
            printf("thanks for using\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 7);

    return 0;
}