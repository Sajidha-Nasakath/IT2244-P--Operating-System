Example 4:
Write a C program to generate and print the Fibonacci series up to a specified number of terms. 
The program should take the number of terms as input from the user and then display the corresponding 
Fiboancci sequence.

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
