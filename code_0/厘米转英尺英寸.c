#include <stdio.h>

int main()
{
	int cm=0;
	
	 printf("请输入厘米数\n");
	 
	 scanf("%d",&cm);
	 
	 int yci = cm/30.48;
	 
	 int ycun = ((cm/30.48)-yci)*12;
	 
	 printf("为%d英尺%d英寸\n", yci,ycun);
	 
	 
return 0;
}
