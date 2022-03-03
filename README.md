# 2021cce2
資傳一乙程式設計二
# 第一週
## 關於'字'
```C
#include <stdio.h>
char line[2000];
int main()
{
    scanf("%s",line);  ///字串用%s,讀入不用&
    for(int i=0;i<2000;i++)
    {
        if(line[i]=='2') printf("找到2\n");  ///字元用''
    }
}
```
```C
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
```
