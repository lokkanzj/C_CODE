#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int z = 0;
	
	printf("��������ʼʱ��\n");
	
	scanf("%d %d", &a,&b);
	
	printf("����������ʱ��\n"); 
	
	scanf("%d",&z);
	
	int c = a*60+b;
	int d = c+z;
	int x = d/60;
	int v = d%60;
	
	 printf("��ֹʱ��%dʱ%d��", x,v);
return 0;
}
