#include <stdio.h>
void swap (int a,int b)
{
	int c=a;
	a=b;
	b=c;
}
void swapByreference (int &num1,int &num2)

{
	int c=num1;
	num1=num2;
	num2=c;
}

int main ()
{
	int a,b;
	scanf ("%d%d",&a,&b);
	swap(a,b);
	printf ("a=%d,b=%d",a,b);
	swapByreference (a,b);
	printf ("a=%d,b=%d",a,b);
	
}
