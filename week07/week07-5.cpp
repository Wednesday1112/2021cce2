#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[2001][80];
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",line[i]); ///只讀國家
		char other[80];
		gets(other); ///把名字清掉
	}                ///讓scanf不會讀到人名
	qsort(line,n,80,compare);
	line[n][0]=0;///讓最後一行有東西(哨兵)
	int combo=1;
	for(int i=0;i<n;i++)
	{
		if(strcmp(line[i],line[i+1])==0)
		{
			combo++;
		}
		else
		{
			printf("%s %d\n",line[i],combo);
			combo=1;
		}
	}
}
