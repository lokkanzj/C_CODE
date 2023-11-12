#include <stdio.h>

int main()
{
	const double a = 40;//工作标准时间 
	const int b = 50;//工作时薪
	int c = 0;//工作实际时间
	double d = 0;//实际薪资 
	
	printf("请输入工作小时数\n");
	scanf("%d", &c );
	
	if(c>a){
		d = a*b+(c-a)*(50*1.5);
	}else{
		d = c*b;
	} 
	
	printf("你的薪资是%f",d);
	
return 0;
}

