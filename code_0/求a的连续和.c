#include <stdio.h>

int main()
{
	int a;
	int n;
	int i;
	int sum = 0;
	int t = 0;
	
	scanf("%d %d",&a,&n);
	
	for(i=0;i<n;i++)
	{
		t=t*10+a;
		sum+=t;
	}
	printf("%d",sum);
	
	
}
