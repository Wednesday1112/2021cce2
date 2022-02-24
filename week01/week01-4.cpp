#include <stdio.h>
#include <string.h> ///為了strlen()
char line[2000];
int main()
{
	int sum=0;
	while(scanf("%s",line)==1) ///不確定行數(=1代表是,=0代表否)
	{
		int N=strlen(line); ///用以計算字串長度
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
