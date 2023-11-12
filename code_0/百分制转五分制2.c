#include <stdio.h>

int main() 
{
	int a;
	
	printf("请输入百分制成绩");
	scanf("%d" , &a);
	
	if(a>=90){
		printf("A");
	}else if(a>=80){
		printf("B");
	}else if(a>=70){
		printf("C");
	}else if(a>=60){
		printf("D");
	}else if(a<60){
		printf("E");
	}
	
	return 0;
	
}
