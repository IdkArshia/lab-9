#include <stdio.h>
#include <string.h>

int main() {
    char arr2[100], arr1[100];
    int n;

    printf("Enter the arr1 string: ");
    gets(arr1);  

    printf("Enter the arr2 string: ");
    gets(arr2);  

    printf("Enter the number of characters to append: ");
    scanf("%d", &n);

    strncat(arr1, arr2, n);

    printf("New String: %s\n", arr1);

    return 0;
}

