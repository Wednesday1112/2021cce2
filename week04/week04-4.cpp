#include <stdio.h>
struct DATA ///資料結構(盒子)的內容
{
    char c;
    int ans;
};
struct DATA list1; ///有1個資料結構(盒子)叫list1
struct DATA lists[100];
int main()
{
    list1.c='A';
    list1.ans=1;
}
