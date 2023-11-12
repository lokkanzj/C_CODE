#include <stdio.h>

int main()
{
	int abc;
	int a, c;
	int b,d = 1;
	
	scanf("%d",&abc);
	
	if(abc<0)
	{
		printf("fu ");
		abc= -abc;
	}
	
	a=abc;
	while(a>9)
	{
		a/=10;
		b*=10;
		d++;
	}
	//printf("%d",b);
	for(d;d>0;d--)
	{
		c=abc;//c=123
	    abc%=b;//abc=23
	    c/=b;//c=1
	    b/=10;//10
	    switch(c)
	    {
		    case 0:
			 printf("ling ");
			 break;
		    case 1:
			 printf("yi ");
			 break;
		    case 2:
			 printf("er ");
			 break;
		    case 3:
			 printf("san ");
			 break;
		    case 4:
			 printf("si ");
			 break;
		    case 5:
			 printf("wu ");
			 break;
		    case 6:
			 printf("liu ");
			 break;
		    case 7:
			 printf("qi ");
			 break;
		    case 8:
			 printf("ba ");
			 break;
		    case 9:
			 printf("jiu ");
			 break;
	    }
	}
	
}
