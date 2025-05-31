#include<stdio.h>
#include<unistd.h>
int main()
{
	int f=fork();
	if(f==0)
	{
		printf("Child Process\n");
	}
	else 
	{
		printf("Parent Process\n");
	}
	return 0;
}
