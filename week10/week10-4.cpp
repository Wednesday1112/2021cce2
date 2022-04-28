#include <stdio.h>
#include <vector> ///std::vector<>
#include <algorithm> ///std::sort()
class Student ///(大寫)把這當作是一種像int、char的格式
{
public: ///公開給別人用,所以main()可以存取裡面的資料
    char name[30];
    int grade;
}; ///注意要有 ;
Student student[100]; ///有100個(大寫)Student,叫做(小寫)student
bool compare(Student a,Student b)
{
    return ( a.grade> b.grade);
}
int main()
{
    FILE * fin=fopen("input.txt","r");
    int N;
    fscanf(fin,"%d",&N);

    std::vector<Student> student(20);

    for(int i=0;i<N;i++)
    {
        fscanf(fin,"%s %d",student[i].name,&student[i].grade);
    }

    std::sort( student.begin(), student.end(), compare);

    for(int i=0;i<N;i++)
    {
        printf("%s %d\n", student[i].name, student[i].grade);
    }
}


