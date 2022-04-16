#include <stdio.h>
int grades[3];
int main()
{
    int grade;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&grade);
        grades[i]=grade;
    }
    for(int i=0;i<3;i++)
    {
        printf("%d\n",grades[i]);
    }
}
