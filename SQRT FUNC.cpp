#include <stdio.h>
#include <math.h>
int check(int num)
{

	int squareroot= sqrt (num);
	return squareroot;
}

int main ()
{
	int num,squareroot;
	printf ("enter a number");
	scanf ("%d",&num);
	squareroot=check(num);
	printf ("square root of %d is %d",num,squareroot);
}
