#include <stdio.h>
#include <string.h> ///���Fstrlen()
char line[2000];
int main()
{
	int sum=0;
	while(scanf("%s",line)==1) ///���T�w���(=1�N��O,=0�N��_)
	{
		int N=strlen(line); ///�ΥH�p��r�����
		int ans=0;
		for(int i=0;i<N;i++)
		{
			if(line[i]=='2') ans++;
		}
		printf("%d\n",ans);
		sum+=ans;
	}
	printf("Total: %d\n",sum);
}
