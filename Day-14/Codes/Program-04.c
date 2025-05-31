#include<stdio.h>
#include<unistd.h>
int main()
{
	int p=getpid();
	int f=fork();
	if(f==0)
	{
		printf("I'm child ");
		printf("My parent id: %d\n",getppid());
	}
	
	else
	{
		int f1=fork();
		if(f1==0)
		{
			printf("I'm sibiling ");
			printf("My parent id: %d\n",getppid());
		}
		
		else
		{
			printf("I am parent ");
			printf("Parent id:%d , ",getpid());
			printf("My parent id: %d\n",getppid());
		}
	}
	return 0;
	
}
