#include <stdio.h>
#include <string.h>
class Student ///(�j�g)��o���@�O�@�خ榡
{
public: ///���}���O�H��,�ҥHmain()�i�H�s���̭������
    char name[30];
    int grade;
}; ///�`�N�n�� ;
Student student[100]; ///��100��(�j�g)Student,�s��(�p�g)student
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
            if( student[i].grade< student[i+1].grade) /// .�i�H���@[��]
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
