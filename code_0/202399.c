#include <stdio.h>
//题目：输入3个整数x,y,z； 
//请把三个数由小到大输出输；
 
int main(void)
{
	int a,b,c;
	printf("请输入3个整数并用逗号隔开");
	scanf("%d,%d,%d",&a,&b,&c);
	//printf("%d%d%d",a,b,c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("%d<",a);
			if(b<c)
			{
				printf("%d<",b);
				printf("%d",c);
			}else{
				printf("%d<",c);
				printf("%d",b);
			}
		}else{
			printf("%d<",c);
			printf("%d<",a);
			printf("%d",b);
		}
	}else{
		if(b<c)
		{
			printf("%d<",b);
			if(a<c)
			{
				printf("%d<",a);
				printf("%d",c);
			}else{
				printf("%d<",c);
				printf("%d",a);
			}
		}else{
			printf("%d<",c);
			printf("%d<",b);
			printf("%d",a);
		}
	}
	
	return 0;
}
