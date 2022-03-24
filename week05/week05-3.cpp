#include <stdio.h>
#include <stdlib.h>
int comp(const void *p1,const void *p2)
{
    int d1= *(int*)p1, d2= *(int*)p2;
    if(d1>d2) return +1;
    if(d1<d2) return -1;
    if(d1==d2) return 0;
}
int main()
{
    int a[100];

    for(int i=0;i<100;i++) printf("%d ",a[i]);
    printf("\n");

    qsort(a,100,sizeof(int),comp);

    for(int i=0;i<100;i++) printf("%d ",a[i]);
    printf("\n");
}
