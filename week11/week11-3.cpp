#include <stdio.h>
#include <string.h>
#include <map> ///std::map<左邊,右邊> 左邊對照到右邊
#include <string> ///沒有 .h
char line[100];
int main()
{
    int T;
    FILE * fin=fopen("input.txt","r");
    fscanf(fin,"%d",&T);
    std::map<std::string,int> table; ///把table裡的字串看成整數
    while(fgets(line,100,fin)) ///fgets(字串,長度,資料)
    {                          ///fgets會讀進跳行
        line[strlen(line)-1]=0; ///把每行的字串結尾去掉(也就是跳行去掉)
        printf("讀到了= %s =\n",line);
        table[line]++;
    }
}
