#include <stdio.h>

int main()
{
	int a1=0, b1=0;
	int a2=0, b2=0;
	
	printf("请输入两个时 分(24进制)\n");
	
	scanf("%d %d",&a1, &b1);
	scanf("%d %d",&a2, &b2);
	
	int t1 = a2-a1;
	int t2 = b2-b1;
	
	if(t2<0){
		t2=60+t2;
		t1--;
	}
	
	int t = t2-t1;
	
	printf("时间差是%d小时%d分钟",t/60,t%60);
	
	return 0;
}
