#include<stdio.h>
int main()

{
	int a,b,add=0,sub=0,div=0,mul=0;
	printf("Enter the 2 number ");
	scanf("%d%d",&a,&b);
	
	add=a+b;
	sub=a-b;
	div=a/b;
	mul=a*b;
	
	printf("\naddition=%d",add);
	printf("\nsubstraction=%d",sub);
	printf("\ndivision=%d",div);
	printf("\nmultiplication=%d",mul);
	
	return 0;
	
	
	
	
}
