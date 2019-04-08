#include <stdio.h>
#include <stdlib.h>

void push(int a[],int e)
{
    a[0]++;
    a[a[0]]=e;
}
void equ(int a[],int b[])
{
    int i;
    for (i=0;i<=a[0];i++) b[i]=a[i];
}
void gan(int a[],int b[],int i,int n)
//  a表示待定要进入的b的车 b表示已经出来的车 i表示下一个将要出来进入到a的车的编号 n为总数
{
    int j;
    int aa[100],bb[100]; //用 aa和bb 储存a和b当前的状态
    if (i>n)
        {
            for (j=1;j<=b[0];j++) printf("%d ",b[j]);
            for (j=a[0];j>0;j--) printf("%d ",a[j]);
            printf("\n");
        }
    else {
                equ(a,aa); equ(b,bb);
                push(a,i);
                gan(a,b,i+1,n);
                equ(aa,a); equ(bb,b);
                if (a[0]!=0)
                {
                    b[0]++; b[b[0]]=a[a[0]]; a[0]--;
                    gan(a,b,i,n);
                }
         }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],b[100];
    a[0]=0; b[0]=0;
    gan(a,b,1,n);
}
