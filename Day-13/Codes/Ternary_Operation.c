//Instead of if..else condition we can use ternary operations also
################### Ternary Operator
test_condition ? expression1 : expression2;

#include<stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d",&age); 
	
	(age >= 18) ? printf("You are eligible for election voting!") : printf("You are not eligible for election voting");
	
	return 0;
}

