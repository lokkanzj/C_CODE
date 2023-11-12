#include <stdio.h>

int main()
{
	int a;//读入的数
	int b = 0;//b++
	int c = 0;
	
	do{
		printf("请输入");
		scanf("%d", &a);
		if( a != -1 ){
			c+=a;
			b++;
		}
	}while(a != -1 );
	
printf("平均数%f\n", 1.0*c/b);
	
	return 0;
}
