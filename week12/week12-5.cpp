#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; ///���@��F��,�C��Oint���Φ�(���I���}�C)
                   ///���S�����X��,�w�]��0��
    v.push_back(10); ///�bv��̥[�J10,�[�j�@��
    v.push_back(20); ///�bv��̥[�J20,�A�[�j�@��
    v.push_back(30); ///�bv��̥[�J30,�A�[�j�@��
    for(int i=0;i<3;i++)
    {
        cout<<v[i];
        cout<<endl;
    }
}
