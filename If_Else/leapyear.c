#include<stdio.h>
int main()
{
	int year;
	
	printf("\nEnter The Any Year:");
	scanf("%d",&year);
	
	if( year%4 == 0)
	{
		printf("\nThis Year is Leap Year");
	}
	else
	{ 
	printf("\nThis Year is Not Leap Year"); 
	}
	return 0;
}
