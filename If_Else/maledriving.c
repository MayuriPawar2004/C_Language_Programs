#include<stdio.h>
int main()

{
	char gender;
	int age;
	
	printf("\nEnter The gender (m/f):");
	scanf("%c",&gender);
	
	printf("\nEnter The age");
	scanf("%d",&age);
	
		if(gender == 'm')
	{
		if(age  >=18)
		printf("\nDriving allowed for male driver");
	}
	else
	{
		printf("\nDriving not allowed for male driver");
	}	
	}
	   else
	   {
		if(age>=22)
		
		{
		
		printf("\nDriving allowed for female driver");
		
	}
	else
	{
		printf("\nDriving not allowed for female driver");ssss
	}
	
	return 0;
}
