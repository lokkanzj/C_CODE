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
	
	printf("������"); 
	
	scanf("%d",&n);//ץȡ 
	
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
			aa=d%10;//ȡĩλ
			d/=10;//ȥĩλ
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
