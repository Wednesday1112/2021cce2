#include <stdio.h>
char line[2000];
int ans[256];
int main()
{
	int t=1;
	while(gets(line))
	{
		if(t>1) printf("\n");
		for(int c=32;c<128;c++)
		{
			ans[c]=0;
		}
		for(int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			ans[c]++;
		}
		for(int c=32;c<128;c++)
		{
			if(ans[c]>0) printf("%d %d\n",c,ans[c]);
		}
		t++;
	}
}
