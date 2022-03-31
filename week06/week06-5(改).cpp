#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000002][40]; ///1百萬棵樹 40字母
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

		tree[n][0]=0; ///因後面是與後面一棵樹比,所以到最後一棵樹的時候會沒得比
		              ///所以直接在最後多加一筆資料--0,這樣最後一棵樹就有得比了
		              ///但因為最大極限是1百萬棵樹,現在又硬加上一筆資料,所以現在極限要在+2
		int combo=1;
		for(int i=0;i<n;i++)
		{
			if(strcmp(tree[i],tree[i+1])==0) combo++;
			else
			{
				printf("%s ",tree[i]);
				printf("%.4f\n",combo*100.0/n);
				combo=1;
			}
		}
	}
}
