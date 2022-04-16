#include <stdio.h>
int main()
{
    FILE * fout=fopen("檔名.txt","w+");
   fprintf(fout,"Hello 我在檔案裡,哈哈\n");
    printf("Hello World\n");
}
