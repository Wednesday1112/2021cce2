#include <stdio.h>
int a[10]={7,8,9,1,2,3,6,5,4,0};
int main()
{
    for(int i=0;i<10;i++) ///左
    {
        for(int k=i+1;k<10;k++) ///右
        {
            if(a[i]>a[k]) ///讓a[i]最小(越左越小,最右最大)
            {
                int sum=a[i];
                a[i]=a[k];
                a[k]=sum;
            }
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
}
