#include <stdio.h>
 
int main()
{
	int n;
	int a;//a=n
	int b;//1xx
	int c;
	int d;
	int e;
	int f,g,aa;
	int sum = 0;
	int yy;
	
	printf("请输入"); 
	
	scanf("%d",&n);//抓取 
	
	b=1;
	for(a=1;a<n;a++)//1xx
	{
		b*=10;
	} 
	//printf("%d",b);
	
	c = b*10;
	//printf("%d",c);
	
	for(b;b<c;b++)
	{
		d=b;
		sum=0;
		for(a=0;a<n;a++)
		{
			aa=d%10;//取末位
			d/=10;//去末位
			f=1;
			
			for(e=0;e<n;e++)
			{
				f*=aa;
				
			}
			sum+=f;
			
		}
		if(sum==b)
			{
				printf("%d ",b);
			}
	}
	
return 0;
}
