#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000000][40]; ///1百萬行 一行40個字
int compare(const void *p1,const void *p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=1;t<=T;t++)
	{
		int n=0;
		while(gets(tree[n]))
		{
			if(tree[n][0]=='\0') break;
			n++;
		}
		if(t>1) printf("\n");
		qsort(tree,n,40,compare);
		for(int i=0;i<n;i++)
		{
			printf("%s %.4f\n",tree[i],100.0/n);
			                        ///出現頻率的百分比
		}
	}
