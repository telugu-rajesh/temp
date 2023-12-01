#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], result[100];

    // Input two strings
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    // String length
    printf("\nString Length:\n");
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));

    // String concatenation
    printf("\nString Concatenation:\n");
    strcpy(result, str1);  // Copy str1 to result
    strcat(result, str2);  // Concatenate str2 to result
    printf("Concatenated string: %s\n", result);

    // String copying
    printf("\nString Copying:\n");
    strcpy(str1, str2);  // Copy str2 to str1
    printf("Copied string (str1): %s\n", str1);

    // String comparison
    printf("\nString Comparison:\n");
    if (strcmp(str1, str2) == 0) {
        printf("Both strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // Substring extraction
    printf("\nSubstring Extraction:\n");
    int start, length;
    printf("Enter start index for substring: ");
    scanf("%d", &start);
    printf("Enter length of substring: ");
    scanf("%d", &length);

    if (start >= 0 && start < strlen(str1) && length >= 0) {
        strncpy(result, str1 + start, length);
        result[length] = '\0';  // Null-terminate the result
        printf("Substring: %s\n", result);
    } else {
        printf("Invalid start index or length for substring.\n");
    }

    return 0;
}
