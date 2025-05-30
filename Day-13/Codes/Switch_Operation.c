################## Switch operator
switch(variable/expression){
	case 1:
	//body of case 1
	break;
	
	case 2:
	//body of case 2
	break;
	
	case n:
	//body of case n
	break;
    
	default:
	//body of default
}

Example 1: Enter the value between 1 to 7 and create a program for following output:

Enter the number between 1 to 7: 1
Today is Sunday!

#include<stdio.h>
int main(){
	int number;
	printf("Enter the number between 1 to 7: ");
	scanf("%d", &number);
	
	switch(number){
		case 1:
		printf("Today is Sunday!");
		break;
		
		case 2:
		printf("Today is Monday!");
		break;
		
		case 3:
		printf("Today is Tuesday!");
		break;
		
		case 4:
		printf("Today is Wednesday!");
		break;
		
		case 5:
		printf("Today is Thursday!");
		break;
		
		case 6:
		printf("Today is Friday!");
		break;
		
		case 7:
		printf("Today is Saturday!");
		break;
		
		default:
		printf("Invalid number!");
		
		return 0;
	}
}

Example 2:
Write a code for small astrology based on your life path number for that get date 
from user then calculate life path number.(use switch case)
	Example:-
		Date:23
		
		Calculation for life path number:
							a=date%10
							b=date/10
							c=a+b
			if life path number :
							1:Lucky
							2:Carefully do your work
							3:Stronger
							4:Happy
							5:Can get help
							6:Doubt
							7:Sad
							8:Like
							9:Courage

#include<stdio.h>
int main(){
	int date;
	printf("Enter your birth date:");
	scanf("%d",&date);
	
	int a = date%10;
	int b = date/10;
	int c = a+b;
	
	switch(c)
	{
		case 1:
		printf("Lucky\n");
		break;
		
		case 2:
		printf("Careful do your work\n");
		break;
		
		case 3:
		printf("Stronger\n");
		break;
		
		case 4:
		printf("Happy\n");
		break;
		
		case 5:
		printf("Can get help\n");
		break;
		
		case 6:
		printf("Doubt\n");
		break;
		
		case 7:
		printf("Sad\n");
		break;
		
		case 8:
		printf("Like\n");
		break;
		
		case 9:
		printf("Courage\n");
		break;
		
		default: {
            int x = c % 10;
            int y = c / 10;
            int z = x + y;
        
            switch(z) {
                case 1:
                    printf("Lucky\n");
                    break;
                case 2:
                    printf("Careful do your work\n");
                    break;
                case 3:
                    printf("Stronger\n");
                    break;
                case 4:
                    printf("Happy\n");
                    break;
                case 5:
                    printf("Can get help\n");
                    break;
                case 6:
                    printf("Doubt\n");
                    break;
                case 7:
                    printf("Sad\n");
                    break;
                case 8:
                    printf("Like\n");
                    break;
                case 9:
                    printf("Courage\n");
                    break;
                default:
                    printf("Try again!");
            }
            break;  
        }
    }
        return 0;
}