#include <stdio.h>
int main()
{
    int a;
    int b =0;

    printf ("ÇëÊäÈëÊýÖµ");
    scant("%d", &a);

    b++;
    a/=10;
    while  (a> 0){
        b++;
        a/=10;
    }

    printf ("%d", b);

    return 0;
}
