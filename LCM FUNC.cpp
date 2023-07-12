#include <stdio.h>
int lcm(int num1,int num2)
{
	int lcm,max;
	num1>num2?max=num1:max=num2;
	while (1)
	{
		if (num1%max==0 &&num2%max==0)
		lcm=max;
		break;
		return lcm;
	}
	max++;
}
int main()
{
	int num1,num2,max;
	printf ("enter two numbers");
	scanf ("%d%d",&num1,&num2);
	int result=lcm(num1,num2);
	
	printf ("%d",result);
}
