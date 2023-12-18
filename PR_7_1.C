#include<stdio.h>
int fact(int);
int main()
{
	int n,x;
	printf("enter n:");
	scanf("%d",&n);
	x=fact(n);
	printf("factorial of %d is %d",n,x);
}
int fact(int n)
{
	if(n==0 || n==1)
	{
		return(1);
	}
	else
	{
		return(n*fact(n-1));

	}
return 0;
}