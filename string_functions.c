#include <stdio.h>
#include <string.h>

int main()
{
    char first[50], second[50];

    printf("Enter first string: ");
    scanf("%49s", first);

    printf("Enter second string: ");
    scanf("%49s", second);

    printf("\nLength of first string: %lu\n", strlen(first));

    strcpy(first, second);
    printf("After copying second string: %s\n", first);

    strcat(first, second);
    printf("After concatenation: %s\n", first);

    printf("Comparison result: %d\n", strcmp(first, second));

    return 0;
}
