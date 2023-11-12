#include <stdio.h>
//题目：有一对兔子从出生后第三的月起每个月都要生一对兔子；
//小兔子长到第三个月以后每个月又要生一对兔子；
//假如兔子都不死；
//每个月兔子总数为多少； 
int main(void)
{
	int i;
	int a = 1;
	int b = 0;
	int n = 0;
	
	for(i=1;i<10;i++)
	{
		a=a+b;
		b=b+a;
		n++; 
		printf("第%d月%d只\n第%d月%d只\n",n,a,n+1,b);
	} 
	
	return 0;
}

