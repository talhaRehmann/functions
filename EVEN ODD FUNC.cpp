#include <stdio.h>
int eo ( int n)
{
	if (n%2==0)
	{
		printf ("%d is an even number",n);
	}
	else
	{
		printf ("%d is an oddd number",n);
		
	}
}
int main ()
{
	int a;
	printf ("enter a number");
	scanf ("%d",&a);
	eo (a);
}
