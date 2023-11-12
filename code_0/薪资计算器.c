#include <stdio.h>

int main()
{
	int a = 0;//工作实际时间
	double  b = 0;//小时薪资
	const int m = 40;//每周标准工作时间 
	double c = 0;
	
	printf("请输入一周内工作时间（小时)");
	scanf("%d",&a);
	
	printf("请输入每小时薪资");
	scanf("%lf",&b);
	
	if (a>m){
		c = b*m+(a-m)*(b*1.5);//加班1.5倍薪资 
	}else{
		c = a*b;
	}
	
	printf("您的薪资是%f",c);
return 0;
}
