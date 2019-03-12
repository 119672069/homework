#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10000],t=0,x,n,i,j,f=1;
    scanf("%d %d",&n,&x); 
    for (i=0;i<n;i++) scanf("%d",a[i]); // 执行n次
    for (i=0;i<n;i++)
    {
        t+=f*a[i];                      // 执行n次
        f*=x;                           // 执行n次
    }
    printf("%d",t);
    // 时间复杂度为O(n)
}
