///Week03-2.cpp step02-1 老師教了指標pointer,
///請在 C Tutor 上面跑跑看。你的任務.請用C Tutor跑!!
#include <stdio.h>
#include <string.h>
///char line[2000]="AELOJ3A";
char line[2000]="123454321";
char *p1, *p2;
char NOW[10]="Good";
int isPalindrome()
{
    int N=strlen(line);
    for(int i=0; i<N; i++){
        p1 = &line[i];
        p2 = &line[N-1-i];
        if( line[i] != line[N-1-i] ) strcpy(NOW, "Bad");
        if( line[i] != line[N-1-i] ) return 0;///bad
    }
    return 1;///good
}
int main()
{
    ///scanf("%s", line);
    int p = isPalindrome();

    if( p==1 ) printf("%s -- is a regular palindrome.\n\n", line);
    if( p==0 ) printf("%s -- is not a palindrome.\n\n", line);
}
