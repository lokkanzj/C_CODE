#include <stdio.h>

int main ()
{
	int a;//输入的数值
	int b = 0;//输出的值 
	int c = 0;//独卫 
	int d = 0;
	
	printf("请输入");
	scanf("%d", &a);
	
	while(a>0){
	c=a%10;//取出末位 
	d = d*10+c;
	a/=10;//去掉末位
}
	printf("%d", d);
	
	return 0; 
 } 
