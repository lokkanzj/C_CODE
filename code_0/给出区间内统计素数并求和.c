#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e = 0;
	int f = 0;
	int j = 1;
	printf("«Î ‰»Î"); 
	
	scanf("%d %d",&a,&b);
	
	for(a+=1;a<b;a++)
	{
		j=1;
		for(c=2;c<a;c++)
		{
			d=a%c;
			if(d==0)
			{
				j=0;
				break;
			}
		}
		if(j==1)
		{
			e++;
		    f+=a;
		}
		
	} 
	
	printf("%d %d",e,f); 
	
return 0;
}
