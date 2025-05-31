//print numbers from 1 to 10
//1 to 5 should be print by child process
//from 6 to 10 should be parent process
//calculate summation of those numbers

#include<stdio.h>
#include<unistd.h>
int main()
{
	int f=fork();
	int sum1 =0;
	int sum2=0;
    int i;
    int j;
	
	if(f==0)
	{
		
		for(i=1;i<=5;i++)
		{
			printf("%d \n",i);
			sum1=sum1+i;
		}
		printf("Summation of child:%d\n",sum1);
	}
	
	else
	{
		for (j=6;j<=10;j++)
		{
			printf("%d \n",j);
			sum2=sum2+j;
			
		}
		printf("Summation of parent:%d\n",sum2);
		
	}
	
	
	return 0;
}
