#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a =rand()%100+1;
	int b = 0;
	int c = 0;
	
	printf("��׼����1��100֮�����\n");
	
	do
	{
		printf("���\n");
		scanf("%d",&c);
		b++;
		if(c>a){
			printf("���µ�������\n");
		} else if(c<a){
			printf("��µ�����С\n");
		}
	 } while (c != a);
	 
	 printf("������%d�ξͲ�����", b);
	 
	 return 0;
}
