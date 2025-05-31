#include<stdio.h>
#include<unistd.h>
int main()
{
	int id=fork();
	int n;
	int i;
    
	if(id==0)
	{
		n=1;
	}
	
	else
	{
	    n=6;
	}
	
	for(i=n;i<n+5;i++)
	{
		printf("%d",i);
	}
	printf("\n");
	
	return 0;
}