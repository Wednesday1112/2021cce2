#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000000][40]; ///1百萬棵樹 40字母
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
		printf("%s ",tree[0]); ///先印第一棵樹
		int combo=1; ///用來算出現次數
		for(int i=1;i<n;i++) ///i=1因為前面印過tree[0]了
		{
			if(strcmp(tree[i-1],tree[i])==0) combo++; ///與前一棵樹比較,一樣則次數++
			else                                      ///不一樣則執行以下
			{
				printf("%.4f\n",combo*100.0/n); ///先印百分比,因為前面有印樹名了
						               ///出現頻率的百分比
				printf("%s ",tree[i]); ///下一棵樹名
				combo=1; ///次數洗白
			}
		}
		printf("%.4f\n",combo*100.0/n); ///因最後一棵樹會沒有百分比
	}
}
