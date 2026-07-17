#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], rev[100];
    int choice, i, len;
    int vowels, digits, spaces;
    int freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    do {
        printf("\n===== String Utility Toolkit =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Check Palindrome\n");
        printf("4. Count Vowels, Digits and Spaces\n");
        printf("5. Display Character Frequency\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Length of string = %d\n", strlen(str));
            break;

        case 2:
            len = strlen(str);
            for(i = 0; i < len; i++)
                rev[i] = str[len - i - 1];
            rev[len] = '\0';

            printf("Reversed String = %s\n", rev);
            break;

        case 3:
            len = strlen(str);
            for(i = 0; i < len; i++)
                rev[i] = str[len - i - 1];
            rev[len] = '\0';

            if(strcmp(str, rev) == 0)
                printf("The string is a Palindrome.\n");
            else
                printf("The string is NOT a Palindrome.\n");
            break;

        case 4:
            vowels = digits = spaces = 0;

            for(i = 0; str[i] != '\0'; i++) {
                char ch = tolower(str[i]);

                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                    vowels++;
                else if(isdigit(str[i]))
                    digits++;
                else if(str[i]==' ')
                    spaces++;
            }

            printf("Vowels = %d\n", vowels);
            printf("Digits = %d\n", digits);
            printf("Spaces = %d\n", spaces);
            break;

        case 5:
            for(i = 0; i < 256; i++)
                freq[i] = 0;

            for(i = 0; str[i] != '\0'; i++)
                freq[(unsigned char)str[i]]++;

            printf("Character Frequency:\n");
            for(i = 0; i < 256; i++) {
                if(freq[i] != 0)
                    printf("%c : %d\n", i, freq[i]);
            }
            break;

        case 6:
            printf("Exiting \n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}