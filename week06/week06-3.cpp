#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char words[1000][50]; ///1千行 一行50個字
int compare(const void *p1,const void *p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",words[i]);
	}
	qsort(words,n,50,compare);
	for(int i=0;i<n;i++)
	{
		printf("%s\n",words[i]);
	}
}
