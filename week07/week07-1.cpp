#include <stdio.h>
char line[2000][80];
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%s\n",line[i]);
	}
}
