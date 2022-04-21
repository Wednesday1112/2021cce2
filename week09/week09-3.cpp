#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,5,4,0};
int main()
{
    int N=10;

    while(1) ///不知道要跑幾次就用while(已經有change可以判斷結束迴圈)
    {
        int change=0; ///用來判斷排好了沒
        for(int i=0;i<N-1;i++)
        {
            if(grade[i]>grade[i+1]) ///改為從小到大
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
