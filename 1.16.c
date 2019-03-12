#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,a,b;
    scanf("%d%d%d",&x,&y,&z);
    if (x>y) {a=x; b=y;}
        else {a=y; b=x;}
    if (z>a) a=z;
    if (z<b) b=z;
    printf("%d %d %d",a,x+y+z-a-b,b);
}
