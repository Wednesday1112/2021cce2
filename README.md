# 2021cce2
資傳一乙程式設計二
# 第一週
## 關於'字'
```C
#include <stdio.h>
int main()
{
///    int a;
///    printf("使用者輸入一個數值: ");
///    scanf("%d",&a);
///    printf("你讀到了 %d\n",a);
    char c;  ///宣告字元用char
    printf("請輸入一堆字: ");
    scanf("%c",&c);  ///字元用%c
    printf("你讀到了 %c\n",c);
}
```
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
# 第二週
## 鏡像字
```C
#include <stdio.h>
char table1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789"; ///反轉前
char table2[]="A   3  HIL JM O   2TUVWXY51SE Z  8 "; ///反轉後
char mirror(char c) ///創一個函式
{
    for(int i=0;table1[i]!=0;i++)
    {
        if(c==table1[i]) return table2[i];
    }
    return ' ';
}
int main()
{
    char c;
    scanf("%c",&c);
    printf("他的鏡像字是==%c==\n",mirror(c)); ///函式代入
}
```
