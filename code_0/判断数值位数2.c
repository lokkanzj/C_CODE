#include <stdio.h>
int main()
{
    int a =0;
    int b =0;

    printf ("ÇëÊäÈëÊýÖµ");
    scanf("%d", &a);
	
	b++;
	a/=10;
	
    while  (a> 0){
        b++;
        a/=10;
    }

    printf ("%d", b);

    return 0;
}
