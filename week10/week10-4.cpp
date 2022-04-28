#include <stdio.h>
#include <vector> ///std::vector<>
#include <algorithm> ///std::sort()
class Student ///(�j�g)��o��@�O�@�ع�int�Bchar���榡
{
public: ///���}���O�H��,�ҥHmain()�i�H�s���̭������
    char name[30];
    int grade;
}; ///�`�N�n�� ;
Student student[100]; ///��100��(�j�g)Student,�s��(�p�g)student
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


