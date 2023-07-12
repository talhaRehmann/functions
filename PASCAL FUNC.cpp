#include <stdio.h>
int fact (int num)
{
	int fact=1;
	for (int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int pascaltriangle (int limit)
{
	for (int row=0;row<limit;row++)
	{
	for (int space=0;space<limit-row;space++)
	{
		{
		printf (" ");}
		}
		for (int col=0;col<=row;col++)
	{
		printf ("%d ",fact(row)/(fact(col)*fact(row-col)));
	}	
	printf ("\n");
	}
			

}


int main ()
{
	int rows;
	scanf ("%d",&rows);
	pascaltriangle (rows);
	return 0;
}
