#include <stdio.h>

int main ()
{
	int a;
	int b =1;
	
	printf("ÇëÊäÈëÊýÖµ");
	scanf("%d", &a);
	if(a>99999) {
		b=6;
	} else if(a>9999) {
		b=5;
	}else if(a>999) {
		b=4;
	}else if(a>99) {
		b=3;
	}else if(a>9) {
		b=2;
	}else if(a>=0) {
		b=1;
	}
	printf("%d", b);
	
	return 0;
}
