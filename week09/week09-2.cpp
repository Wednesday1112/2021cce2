///�w�w�Ƨ�,��ְj���
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,5,4,0};
int main()
{
    int N=10;

    for(int k=0;k<N;k++)
    {
        int change=0; ///�ΨӧP�_�Ʀn�F�S
        for(int i=0;i<N-1;i++)
        {
            if(grade[i]<grade[i+1])
            {
                int temp=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=temp;
                change++; ///�٨S�Ʀn
            }
        }
        if(change==0) break; ///�Ʀn�F�N���A�]�F
        for(int i=0;i<N;i++) printf("%d ",grade[i]);
        printf("\n");
    }
}

