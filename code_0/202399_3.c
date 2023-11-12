#include <stdio.h>
//列出给出区间内所有素数 
int main()
{
	int c;
	int v;
	int a,b;
	int m = 0;
	
	printf("请输入区间");
	scanf("%d,%d",&c,&v);
	
	if(c==1)
	{
		c++;
	}
	
	for(c;c<v;c++)
	{
		a=c;
		for(b=2;b<a;b++)
		{
			
			if(a%b==0)
			{
				m=1;
				break;
			}
		}
		if(m==0)
		{
			printf("%d\n",c);
		}
		m=0;
	}
	
	
	return 0;
}
