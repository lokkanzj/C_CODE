#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int z = 0;
	
	printf("请输入起始时间\n");
	
	scanf("%d %d", &a,&b);
	
	printf("请输入流逝时间\n"); 
	
	scanf("%d",&z);
	
	int c = a*60+b;
	int d = c+z;
	int x = d/60;
	int v = d%60;
	
	 printf("终止时间%d时%d分", x,v);
return 0;
}
