#include <stdio.h>
#include <string.h>
#include <map> ///std::map<����,�k��> �����Ө�k��
#include <string> ///�S�� .h
char line[100];
int main()
{
    int T;
    FILE * fin=fopen("input.txt","r");
    fscanf(fin,"%d",&T);
    std::map<std::string,int> table; ///��table�̪��r��ݦ����
    while(fgets(line,100,fin)) ///fgets(�r��,����,���)
    {                          ///fgets�|Ū�i����
        line[strlen(line)-1]=0; ///��C�檺�r�굲���h��(�]�N�O����h��)
        printf("Ū��F= %s =\n",line);
        table[line]++;
    }
}
