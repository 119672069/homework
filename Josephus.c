#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int k,x;
    struct node *next;
}Linklist;

int main()
{
    int a[100],i,j,m,n,t=0;
    scanf("%d",&n);
    for (i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m); 
    Linklist *l,*p,*q,*s;
    for (i=0;i<n;i++)
    {
        p=(Linklist*)malloc(sizeof(Linklist));
        p->k=a[i]; p->x=i+1;
        if (i==0) l=p;
        else {q->next=p;}
        q=p;
    }
    q->next=l; p=l;
    while (t<n)
    {
        for (i=0;i<m-1;i++) { p=p->next; q=q->next;}
        printf("%d\t",p->x);
        m=p->k; q->next=p->next; free(p); p=q->next;
        t++;
    }
}
