#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	
	printf("请输入两个整数");
	scanf("%d %d",&a,&b);
	
	if(a>b){
		printf("大的整数是%d\n",a);
	}else{
		printf("大的整数是%d\n",b);
	}
	
	if(a==b){
		printf("两数相等"); 
	}
	 
return 0;
}
