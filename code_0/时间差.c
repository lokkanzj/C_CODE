#include <stdio.h>

int main()
{
	int a1=0, b1=0;
	int a2=0, b2=0;
	
	printf("����������ʱ ��(24����)\n");
	
	scanf("%d %d",&a1, &b1);
	scanf("%d %d",&a2, &b2);
	
	int t1 = a1 * 60 + b1;
	int t2 = a2 * 60 + b2;
	
	int t = t2-t1;
	
	printf("ʱ�����%dСʱ%d����",t/60,t%60);
	
	return 0;
}
