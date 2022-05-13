#include <iostream>
using namespace std; ///之後都能省略std::
class Student
{
public:
	char name[30];
	int grade;
};
Student stu[100];
int main()
{
	int N;
	cin>>N; ///std裡面的cin
	for(int i=0;i<N;i++)
	{
		cin>>stu[i].name;
		cin>>stu[i].grade;
	}
	for(int i=0;i<N;i++)
	{
		cout<<stu[i].name<< " ";
		cout<<stu[i].grade<<endl; ///end line
	}
	return 0;
}
