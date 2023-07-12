#include <stdio.h>
int gcd (int num1,int num2)
{
	int small,greater;
	if (num1>num2)
	{greater =num1;
	small=num2;
	}
	else
	{
		greater=num2;
		small=num1;
	}
	while (small>0)
	{
		int r=greater%small;
		greater=small;
		small=r;
	}
	return greater;
}
int main ()

{
	int num1,num2;
	printf ("enter two numbers");
	scanf ("%d%d",&num1,&num2);
    int result=gcd (num1,num2);
	printf ("%d",result);
}
