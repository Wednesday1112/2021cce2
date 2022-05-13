#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; ///有一串東西,每格是int的形式(有點像陣列)
                   ///但沒說有幾格,預設為0格
    v.push_back(10); ///在v串裡加入10,加大一格
    v.push_back(20); ///在v串裡加入20,再加大一格
    v.push_back(30); ///在v串裡加入30,再加大一格
    for(int i=0;i<3;i++)
    {
        cout<<v[i];
        cout<<endl;
    }
}
