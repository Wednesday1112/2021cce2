#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000002][40]; ///1�ʸU�ʾ� 40�r��
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

		tree[n][0]=0; ///�]�᭱�O�P�᭱�@�ʾ��,�ҥH��̫�@�ʾ𪺮ɭԷ|�S�o��
		              ///�ҥH�����b�̫�h�[�@�����--0,�o�˳̫�@�ʾ�N���o��F
		              ///���]���̤j�����O1�ʸU�ʾ�,�{�b�S�w�[�W�@�����,�ҥH�{�b�����n�b+2
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
