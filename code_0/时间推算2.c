#include <stdio.h>

int main()
{   int cssj = 0;
    int lssj = 0;
    printf("��������λ��ʱ��");
	
	scanf("%d",&cssj);
	
	printf("����������ʱ��");
	
	scanf("%d", &lssj);
	
	int a = cssj/100*60;
	int b = cssj%100;
	int c = a+b+lssj;
	int d = c/60;
	int e = c%60;
	int f = d*100+e;
	
	printf("��ֹʱ��Ϊ%d", f);
	 
return 0;
}
