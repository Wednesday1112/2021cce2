#include <stdio.h>
#include <string.h>
char names[3][20];
int grades[3];
int main()
{
    FILE * fin=fopen("file.txt","r+");///r+代表讀進檔案
    char name[20];
    int grade;
    for(int i=0;i<3;i++)
    {
        fscanf(fin,"%s",name);
        fscanf(fin,"%d",&grade);
        strcpy(names[i],name); ///把name複製到names[i]裡面
        grades[i]=grade;
    }
    ///FILE * fout=fopen("file.txt","w+");
    for(int i=0;i<3;i++)
    {
        printf("%s %d\n",names[i],grades[i]);
        ///fprintf(fout,"%s %d\n",names[i],grades[i]);
    }
}
