#include <string.h> ///strcpy()
char name[100][80]; ///100行資料,每行80字母
int grade[100]; ///100個整數
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%s %d",name[i],&grade[i]); ///%s不用&,%d要&
	}
	for(int k=0;k<N-1;k++)
	{
		for(int i=0;i<N-1;i++)
		{
			if(grade[i]<grade[i+1])
			{
				int temp=grade[i];
				grade[i]=grade[i+1];
				grade[i+1]=temp;
				char tempName[80]; ///字串交換用strcpy()
				strcpy(tempName,name[i]);
				strcpy(name[i],name[i+1]);
				strcpy(name[i+1],tempName);
			}
		}
	}
	for(int i=0;i<N;i++)
	{
		printf("%s %d\n",name[i],grade[i]);
	}
}
