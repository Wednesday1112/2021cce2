#include <stdio.h>
int a[10]={7,8,9,1,2,3,6,5,4,0};
int main()
{
    for(int i=0;i<10-1;i++)
    {
        for(int k=0;k<10-1;k++) ///10-1�O��k+1���W�X�d��
        {
            if(a[k]>a[k+1]) ///���ಾ�����̤j,�ä@���V�k��,�����洫
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
