############# if else
	if(condition){
		//body of if statement;
	}
	else{
		//body of else statement;
	}
	
Example:
Enter your age and verify you are eligible or not for election voting 
using if else condition

#include<stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d",&age); 
	
	if(age >= 18){
		printf("You are eligible for election voting!");
	}
	else{
		printf("You are not eligible for election voting");
	}
	return 0;
}