#include <stdio.h>

int main()
{   int cssj = 0;
    int lssj = 0;
    printf("请输入四位数时间");
	
	scanf("%d",&cssj);
	
	printf("请输入流逝时间");
	
	scanf("%d", &lssj);
	
	int a = cssj/100*60;
	int b = cssj%100;
	int c = a+b+lssj;
	int d = c/60;
	int e = c%60;
	int f = d*100+e;
	
	printf("终止时间为%d", f);
	 
return 0;
}
