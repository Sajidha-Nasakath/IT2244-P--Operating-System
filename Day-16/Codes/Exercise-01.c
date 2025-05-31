#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    int num1, num2, num3;
    int i, j, k;  

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    int f = fork();
    if (f == 0) 
    {
        printf("\nChild of A (B)\n");
        printf("Parent Id: %d\n", getppid());

        int factorial = 1;
        for (i = 1; i <= num1; i++)
        {
            factorial *= i;
        }
        printf("Factorial of first number (%d): %d\n", num1, factorial);
    }
    else
    {
        int f1 = fork();
        if (f1 == 0) 
        {
            printf("\nChild of A (C)\n");
            printf("Parent Id: %d\n", getppid());

            int f2 = fork();
            if (f2 == 0) 
            {
                printf("\nChild of C (D)\n");
                printf("Parent Id: %d\n", getppid());

                int a = 0, b = 1;
                printf("Fibonacci Series up to %d terms: %d, %d", num2, a, b);
                for (j = 3; j <= num2; j++)
                {
                    int c = a + b;
                    printf(", %d", c);
                    a = b;
                    b = c;
                }
                printf("\n");
            }
            else
            {
                int f3 = fork();
                if (f3 == 0) 
                {
                    printf("\nChild of C (E)\n");
                    printf("Parent Id: %d\n", getppid());

                    bool isPrime = (num3 > 1);
                    for (k = 2; k * k <= num3; k++)
                    {
                        if (num3 % k == 0)
                        {
                            isPrime = false;
                            break;
                        }
                    }

                    if (isPrime)
                        printf("The number %d is prime.\n", num3);
                    else
                        printf("The number %d is not prime.\n", num3);
                }
                else
                {
                    printf("\nParent (C)\n");
                    printf("Process Id: %d\n", getpid());
                }
            }
        }
        else
        {
            printf("\nParent (A)\n");
            printf("Process Id: %d\n", getpid());
        }
    }

    return 0;
}
