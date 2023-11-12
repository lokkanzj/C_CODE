#include <stdio.h>

int main()
{
	int a;//输入的数
	int b = 1;//b++
	int c = 1;//基础乘数 
	
	printf("请输入");
	scanf("%d", &a);
	
	while(b<=a){
		c*=b;
		b++; 
}
	
	printf("%d的阶乘%d", a,  c);
	
	return 0;
}
