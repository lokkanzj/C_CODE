#include <stdio.h>
//有1，2，3，4 个数字，能组成多少互不相同且无重复的三位数字？都有多少？
//已知：三位数
//      1——4 
//      各不相同
//输出：有多少这样的三位数
//      依次输出 
int main(void)
{
	int y = 0;//计数器
	int a,b,c;
	
	for(a=1;a<5;a++)
	{
		for(b=1;b<5;b++)
		{
			for(c=1;c<5;c++)
			{
				if(a!=b && a!=c && b!=c)
				{
					y++;
					printf("组合%d,%d,%d\n",a,b,c);
				}
			}
		}
	} 
	printf("%d组数字\n",y);
	
	return 0;
} 
