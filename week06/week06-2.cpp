#include <stdio.h>
#include <stdlib.h> ///qsort()
#include <string.h> ///strcmp()
char tree[1000000][40]; ///1百萬棵樹 40字母
int compare(const void *p1,const void *p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2); ///strcmp()為比較兩字串,
}                         ///若s1<s2則輸出<0的數,
int main()                ///若s1>s2則輸出>0的樹
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
	 ///用的陣列,有幾行,一行幾個字,用到的函式
		for(int i=0;i<n;i++)
		{
			printf("%s\n",tree[i]);
		}
	}
}
