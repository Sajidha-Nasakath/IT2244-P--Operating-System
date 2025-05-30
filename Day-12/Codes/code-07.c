//Take input from users

#include<stdio.h>
int main(){
	int age;
	printf("Enter your age:");
	scanf("%d", &age);  // &-->ampasan
	printf("Age:%d",age);
	
	double num;
	printf("\nEnter your number:");
	scanf("%lf", &num);
	printf("Double Number:%lf",num);
	
	float num2;
	printf("\nEnter your float number:");
	scanf("%f", &num2); 
	printf("Double Number:%f",num2);
	
	char character;
	printf("\nEnter your character:");
	scanf(" %c", &character);
	printf("Character:%c",character);
	
	//multiple inputs together
	double num3;
	char alpha;
	printf("\nEnter inputs:");
	scanf("%lf %c", &num3,&alpha);
	
	return 0;
}
