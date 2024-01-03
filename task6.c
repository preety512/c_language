//wap to find  a given string is a palindrom string or not 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (right > left) {
        // Ignore non-alphanumeric characters
        while (!isalnum(str[left]) && left < right) {
            left++;
        }
        while (!isalnum(str[right]) && right > left) {
            right--;
        }

        // Compare characters ignoring case
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Palindrome
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove trailing newline character if present
    input[strcspn(input, "\n")] = '\0';

    if (isPalindrome(input)) {
        printf("'%s' is a palindrome!\n", input);
    } else {
        printf("'%s' is not a palindrome.\n", input);
    }

    return 0;
}

