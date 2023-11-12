#include <stdio.h>

int main()
{
	int a;
	int b;
	int c,d,x;
	int t = 1;
	
	scanf("%d %d",&a,&b);
	
	c=a;
	d=b;
	while(t>0)
	{
		t=c%d;
		c=d;
		x=d;
		d=t;
	}
	printf("%d/%d",a/x,b/x);
	
	return 0; 
	
}
