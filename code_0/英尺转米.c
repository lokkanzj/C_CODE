#include <stdio.h>

int main()
{
	int foot;
	int inch;
	
	printf("请输入几尺.几寸\n");
	 
	scanf("%d.%d",&foot,&inch);
	
	printf("身高是%f米。 \n",((foot+inch/12)*0.3048));
	
return 0;
}

