#include <stdio.h>

int main()
{
	int e;//&
	int a = 1;
	int b = 1;
	int c;
	
	scanf("%d",&e);
	
	for(b=1;b<=e;b++)
	{
		for(a=1;a<=b;a++)
		{
			c=a*b;
			if(c<10)
			{
				printf("%d*%d=%d   ",a,b,c);
			}else
			{
				printf("%d*%d=%d  ",a,b,c);
			}
			if(a==b)
			{
				printf("\n");
			}
		}
	}
	
return 0;
}
