#include <stdio.h>
#include <stdlib.h> ///qsort()
#include <string.h> ///strcmp()
char tree[1000000][40]; ///1�ʸU�ʾ� 40�r��
int compare(const void *p1,const void *p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2); ///strcmp()�������r��,
}                         ///�Ys1<s2�h��X<0����,
int main()                ///�Ys1>s2�h��X>0����
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
	 ///�Ϊ��}�C,���X��,�@��X�Ӧr,�Ψ쪺�禡
		for(int i=0;i<n;i++)
		{
			printf("%s\n",tree[i]);
		}
	}
}
