#include <stdio.h>
int perfectnum (int num)
{
	int sum=0;
	for (int j=1;j<=num;j++)
	{
		if (num%j==0)
		{
		sum=sum+j;}
		
	}
	if (sum==num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void limit(int ll,int ul)
{
	
for (int i=ll;i<=ul;i++)
	{
		if(perfectnum(i))
		{
			printf ("%d", i);}
			}
		}

int main ()
{
	int num,upperlimit,lowerlimit;
	scanf ("%d%d",&upperlimit,&lowerlimit);
	limit (upperlimit,lowerlimit);


	}
