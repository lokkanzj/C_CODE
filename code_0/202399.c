#include <stdio.h>
//��Ŀ������3������x,y,z�� 
//�����������С��������䣻
 
int main(void)
{
	int a,b,c;
	printf("������3���������ö��Ÿ���");
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
