//Data types


#include<stdio.h>
int main(){
	int age = 10;
	printf("\n%d",age);
	printf("\nsize:%zu", sizeof(age));
	
	double number=12.45;
	printf("\n%.2lf",number);
	
	float number1=10.9f; //using f we indicate the 
	printf("\n%f",number1); //output 10.900000
	printf("\n%.1f",number1); //output 10.9
	
	char character='z';
	printf("\n%c",character);
	printf("\n%d",character);
	return 0;
}