Example 5:
Write a C program to calculate the factorial of a given non-negative integer.


//Factorial_Example_01

#include<stdio.h>
int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	int a=0;
    int b=1;

    printf("Fibonacci Series: %d,%d",a,b);
	
    int i;
	for(i=3;i<=num;i++)
	{
		int c=a+b;
		printf(",%d",c);
		a=b;
		b=c;
	}
	return 0;

}





//Factorial_Example_02

#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;
    int i;  

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %llu\n", n, factorial);
    }

    return 0;
}
