#include<stdio.h>
int gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			return(gcd(a-b,b));
		}
		else
		{
			return(gcd(a,b-a));
		}
	}
	return a;
}
int main()
{
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("GCD of %d and %d is %d",a,b,gcd(a,b));

return 0;
}