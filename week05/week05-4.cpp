#include <stdio.h>
char line[40];
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=1;t<=T;t++)
	{
		if(t>1) printf("\n");
		printf("現在是第%d堆資料\n",t);
		while(gets(line))
		{
			if(line[0]==0) break;
		}
	}
}
