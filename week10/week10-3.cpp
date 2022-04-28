#include <stdio.h>
#include <string.h>
class Student ///(大寫)把這當作是一種格式
{
public: ///公開給別人用,所以main()可以存取裡面的資料
    char name[30];
    int grade;
}; ///注意要有 ;
Student student[100]; ///有100個(大寫)Student,叫做(小寫)student
int main()
{
    FILE * fin=fopen("input.txt","r");
    int N;
    fscanf(fin,"%d",&N);
    for(int i=0;i<N;i++)
    {
        fscanf(fin,"%s %d",student[i].name,&student[i].grade);
    }
    for(int k=0;k<N-1;k++)
    {
        for(int i=0;i<N-1;i++)
        {
            if( student[i].grade< student[i+1].grade) /// .可以當作[的]
            {
                Student temp= student[i];
                student[i]= student[i+1];
                student[i+1]= temp;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        printf("%s %d\n", student[i].name, student[i].grade);
    }
}

