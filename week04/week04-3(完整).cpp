#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while(gets(line))
	{
		if(t>1) printf("\n");
		int max=0; ///用來算最大頻率
		int ans[256]={};
		for(int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			ans[c]++;
			if(ans[c]>max) max=ans[c]; ///更新最大頻率
		}
		for(int f=1;f<=max;f++) ///在最大頻率內找,可以減少計算時間
		{
			for(int c=128;c>=32;c--)
			{
				if(ans[c]==f) printf("%d %d\n",c,ans[c]);
			}
		}
		t++;
	}

}
