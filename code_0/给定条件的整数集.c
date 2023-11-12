#include <stdio.h>
int main()
{
	int a;//≥ı º÷µ
	
	scanf("%d",&a);
	
	int b, c, d;
	int e = 0;
	
	b=a;
	while(b<=a+3){
		c=a;
		while(c<=a+3){
			d=a;
			while(d<=a+3){
				if(b != c){
					if(b != d){
						if(c != d){
							printf("%d%d%d ", b, c, d);
							e++;
							if(e==6){
								printf("\n");
								e=0;
							}
						}
					}
				}
			d++;
			}
		c++;
		}
	b++;
	}
	
	return 0; 
}
