#include <string.h> ///strcpy()
char name[100][80]; ///100����,�C��80�r��
int grade[100]; ///100�Ӿ��
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%s %d",name[i],&grade[i]); ///%s����&,%d�n&
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
				char tempName[80]; ///�r��洫��strcpy()
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
