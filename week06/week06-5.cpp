#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000000][40]; ///1�ʸU�ʾ� 40�r��
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
		printf("%s ",tree[0]); ///���L�Ĥ@�ʾ�
		int combo=1; ///�ΨӺ�X�{����
		for(int i=1;i<n;i++) ///i=1�]���e���L�Ltree[0]�F
		{
			if(strcmp(tree[i-1],tree[i])==0) combo++; ///�P�e�@�ʾ���,�@�˫h����++
			else                                      ///���@�˫h����H�U
			{
				printf("%.4f\n",combo*100.0/n); ///���L�ʤ���,�]���e�����L��W�F
						               ///�X�{�W�v���ʤ���
				printf("%s ",tree[i]); ///�U�@�ʾ�W
				combo=1; ///���Ƭ~��
			}
		}
		printf("%.4f\n",combo*100.0/n); ///�]�̫�@�ʾ�|�S���ʤ���
	}
}
