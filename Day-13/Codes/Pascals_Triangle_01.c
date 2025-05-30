/*Example 11:
c program to generate Pascal's Triangle.
output:
no of rows:5
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/


#include <stdio.h>
int main() {
    int rows, num;
    int i;
    int j;

    printf("no of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        num = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);  // Calculate next value in row
        }
        printf("\n");
    }

    return 0;
}
