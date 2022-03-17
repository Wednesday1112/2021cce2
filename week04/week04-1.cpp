#include <stdio.h>
char line[2000];
int main()
{
	int t=0;
	while(gets(line))
	{
		if(t>1) printf("\n");
		int ans[256]={};
		for(int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			ans[c]++;
		}
		for(int c=128;c>=38;c--)
		{
			if(ans[c]!=0) printf("%d %d\n",c,ans[c]);
		}
		t++;
	}

}
