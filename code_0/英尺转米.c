#include <stdio.h>

int main()
{
	int foot;
	int inch;
	
	printf("�����뼸��.����\n");
	 
	scanf("%d.%d",&foot,&inch);
	
	printf("�����%f�ס� \n",((foot+inch/12)*0.3048));
	
return 0;
}

