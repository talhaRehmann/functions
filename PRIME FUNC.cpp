#include <stdio.h>
int prime (int n)
{
	int c=2;
	for (int i=2;i<=n/2;i++)
	{
		if (n%i==0)
		{
		c++;}
		break;
	}
	if (c==2)
	{
		printf (" %d is a prime number",n);
		
	}
	else
	{
		printf ("%d is not a prime number",n);
	}
}
int main ()
{
	int n;
	printf ("enter a number :");
	scanf ("%d",&n);
	prime (n);
}
