#include <stdio.h>

int main()
{
	int cm=0;
	
	 printf("������������\n");
	 
	 scanf("%d",&cm);
	 
	 int yci = cm/30.48;
	 
	 int ycun = ((cm/30.48)-yci)*12;
	 
	 printf("Ϊ%dӢ��%dӢ��\n", yci,ycun);
	 
	 
return 0;
}
