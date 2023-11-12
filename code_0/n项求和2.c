#include <stdio.h>

int main()
{
	int e;//¼ÆÊýÆ÷
	double a,b; 
	double sum = 0.0; 
	scanf("%d",&e);
	int i;
	double t = 0;
	
	b=1;
	a=2;
	for(i=1;i<=e;i++)
	{
		sum+=a/b;
		t=a;
		a=a+b;
		b=t;
	}
	printf("%.2f",sum);
	return 0;
}
