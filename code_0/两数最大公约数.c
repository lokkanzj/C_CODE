#include <stdio.h>

int main()
{
	int a;//����Ĵ������� 
	int b;//����Ĵ�������
	int c = 1;//�������� c++ 
	int d = 1;//d++
	int e = 0;//������С��
	int f = 0;
	
	scanf("%d %d", &a, &b);//ץȡ 
	//printf("%d %d", a, b);
	
	if(a>b){//�ж�������С 
		e=b;
	}else{
		e=a;
	} 
	
	while(e>=c){
		if(a%c==0){
			if(b%c==0){
			f=c;
			}
		}
		c++;//�������� 
}

printf("%d",f);	
	return 0;
}
