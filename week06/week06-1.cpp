#include <stdio.h>
char tree[1000000][40]; ///1�ʸU�ʾ� 40�r��
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
		printf("Test Case %d: %d lines\n",t,n);
	}
}
