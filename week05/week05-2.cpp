#include <stdio.h>
int a[10]={7,8,9,1,2,3,6,5,4,0};
int main()
{
    for(int i=0;i<10-1;i++)
    {
        for(int k=0;k<10-1;k++) ///10-1是讓k+1不超出範圍
        {
            if(a[k]>a[k+1]) ///讓轉移中的最大,並一路向右比,邊找邊交換
            {
                int sum=a[k];
                a[k]=a[k+1];
                a[k+1]=sum;
            }
        }
        for(int i=0;i<10;i++) printf("%d ",a[i]);
        printf("\n");
    }
}
