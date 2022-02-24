#include <stdio.h>
char line[2000];
int main()
{
    scanf("%s",line);  ///字串用%s,讀入不用&
    for(int i=0;i<2000;i++)
    {
        if(line[i]=='2') printf("找到2\n");  ///字元用''
    }
}
