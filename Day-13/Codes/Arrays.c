Example 8:
Write a C program that:
Accepts an array of integers from the user.
Finds and displays the maximum and minimum values in the array.

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    int arr[num];
    printf("Enter %d elements: ", num);
    int i;
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];

    for (i = 1; i < num; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
