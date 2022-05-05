#include <stdio.h>
char line[100];
int main()
{
    int T;
    FILE * fin=fopen("input.txt","r");
    fscanf(fin,"%d",&T);
    printf("你讀到了T:%d\n",T);
    while(fgets(line,100,fin)) ///fgets(字串,長度,資料)
    {                          ///fgets會讀進跳行
        printf("讀到了=%s=\n",line);
    }
}
