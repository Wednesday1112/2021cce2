///泡泡排序,減少迴圈數
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,5,4,0};
int main()
{
    int N=10;

    for(int k=0;k<N;k++)
    {
        int change=0; ///用來判斷排好了沒
        for(int i=0;i<N-1;i++)
        {
            if(grade[i]<grade[i+1])
            {
                int temp=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=temp;
                change++; ///還沒排好
            }
        }
        if(change==0) break; ///排好了就不再跑了
        for(int i=0;i<N;i++) printf("%d ",grade[i]);
        printf("\n");
    }
}

