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
char line[2000]; ///字元也可宣告為陣列
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
char table1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789"; ///反轉前(字元的陣列內容用""包起來,int數字是用{})
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
# 第三週
## 鏡像迴文進階
```C
#include <stdio.h>
#include <string.h>
char line[2000];
char tableA[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char tableB[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mirror_char(char c)
{
	for(int i=0;tableA[i]!=0;i++)
	{
		if(c==tableA[i]) return tableB[i];
	}
	return ' ';
}
int mirror()
{
	int N=strlen(line);
	for(int i=0;i<N;i++)
	{
		if(mirror_char(line[i])!=line[N-1-i]) return 0;
	}
	return 1;
}
int palindrome()
{
	int N=strlen(line);
	for(int i=0;i<N;i++)
	{
		if(line[i]!=line[N-1-i]) return 0;
	}
	return 1;
}
int main()
{
	while(scanf("%s",line)==1)
	{
		int p=palindrome();
		int m=mirror();
		if(p==1&&m==1) printf("%s -- is a mirrored palindrome.\n\n",line);
		if(p==1&&m==0) printf("%s -- is a regular palindrome.\n\n",line);
		if(p==0&&m==1) printf("%s -- is a mirrored string.\n\n",line);
		if(p==0&&m==0) printf("%s -- is not a palindrome.\n\n",line);
	}
}
```
## 讀入整行 gets()
```C
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while(gets(line)) ///讀入一整行(scanf()遇到空格會停,gets()不會)
	{
		if(t>1) printf("\n");
		printf("第%d筆資料\n",t);
		t++;
	}
}
```
# 第四週
## 算出現頻率
```C
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while(gets(line))
	{
		if(t>1) printf("\n"); ///第一行前不跳行
		int max=0; ///用來算最大頻率
		int ans[256]={}; ///用來記錄不同字元的頻率
		for(int i=0;line[i]!=0;i++)
		{
			char c=line[i]; /// 1
			ans[c]++; /// 2   1,2可合併成 ans[ line[i] ]++; (ans[字元]++會轉換成ans[ASCII碼]++,所以可計算頻率)
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
```
## 資料結構
```C
#include <stdio.h>
struct DATA ///資料結構(盒子)的內容
{
    char c;
    int ans;
}; ///要加分號;
struct DATA list1; ///有1個資料結構(盒子)叫list1
struct DATA lists[100]; ///有1個資料結構(盒子)陣列
int main()
{
    list1.c='A'; ///把list1這個資料結構的char c='A'
    list1.ans=1; ///把list1這個資料結構的int ans=1
}
```
# 第五週
## 選擇排序法
```C
#include <stdio.h>
int a[10]={7,8,9,1,2,3,6,5,4,0};
int main()
{
    for(int i=0;i<10;i++) ///左
    {
        for(int k=i+1;k<10;k++) ///右
        {
            if(a[i]>a[k]) ///讓a[i]最小(越左越小,最右最大)
            {
                int sum=a[i];
                a[i]=a[k];
                a[k]=sum;
            }
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
}
```
## 泡泡排序法
```C
#include <stdio.h>
int a[10]={7,8,9,1,2,3,6,5,4,0};
int main()
{
    for(int i=0;i<10-1;i++)
    {
        for(int k=0;k<10-1;k++) ///10-1是讓k+1不超出範圍
        {
            if(a[k]>a[k+1]) ///讓轉移中的最大,並一路向右比,邊找邊交換
            {
                int sum=a[k];
                a[k]=a[k+1];
                a[k+1]=sum;
            }
        }
        for(int i=0;i<10;i++) printf("%d ",a[i]);
        printf("\n");
    }
}
```
## 快速排序法(說明在第六週)
```C
#include <stdio.h>
#include <stdlib.h> ///為了qsort()
int comp(const void *p1,const void *p2)
{
    int d1= *(int*)p1, d2= *(int*)p2;
    if(d1>d2) return +1;
    if(d1<d2) return -1;
    if(d1==d2) return 0;
}
int main()
{
    int a[100];
    
    for(int i=0;i<100;i++) printf("%d",a[i]);
    printf("\n");
    
    qsort(a,100,sizeof(int),comp);
    
    for(int i=0;i<100;i++) printf("%d",a[i]);
    printf("\n");
}
```
# 第六週
## 快速排序應用
```C
#include <stdio.h>
#include <stdlib.h> ///qsort()用來排序
#include <string.h> ///strcmp()用來比字串大小
char words[1000][50]; ///1千行 一行50個字
int compare(const void *p1,const void *p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2); ///strcmp()為比較兩字串,
}                             ///若s1<s2則輸出<0的數,
int main()                    ///若s1>s2則輸出>0的數,
{                             ///若s1=s2則輸出0
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",words[i]);
	}
	qsort(words,n,50,compare);
           ///用的陣列,有幾行,一行幾個字,用到的函式
	for(int i=0;i<n;i++)
	{
		printf("%s\n",words[i]);
	}
}
```
## 快速排序法進階應用
```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000000][40]; ///1百萬棵樹 40字母
int compare(const void *p1,const void *p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=1;t<=T;t++)
	{
		int n=0;
		while(gets(tree[n]))
		{
			if(tree[n][0]=='\0') break;
			n++;
		}
		if(t>1) printf("\n");
		qsort(tree,n,40,compare);
		printf("%s ",tree[0]); ///先印第一棵樹
		int combo=1; ///用來算出現次數
		for(int i=1;i<n;i++) ///i=1因為前面印過tree[0]了
		{
			if(strcmp(tree[i-1],tree[i])==0) combo++; ///與前一棵樹比較,一樣則次數++
			else                                      ///不一樣則執行以下
			{
				printf("%.4f\n",combo*100.0/n); ///先印百分比,因為前面有印樹名了
						               ///出現頻率的百分比
				printf("%s ",tree[i]); ///下一棵樹名
				combo=1; ///次數洗白
			}
		}
		printf("%.4f\n",combo*100.0/n); ///因最後一棵樹會沒有百分比
	}
}
```
## 快速排序法進階應用(自改)
```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000002][40]; ///1百萬棵樹 40字母
int compare(const void *p1,const void *p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=1;t<=T;t++)
	{
		int n=0;
		while(gets(tree[n]))
		{
			if(tree[n][0]=='\0') break;
			n++;
		}
		if(t>1) printf("\n");
		qsort(tree,n,40,compare);
	     ///printf("%s ",tree[0]); 
		
		tree[n][0]=0; ///因後面是與後面一棵樹比,所以到最後一棵樹的時候會沒得比
		              ///所以直接在最後多加一筆資料--0,這樣最後一棵樹就有得比了
		              ///但因為最大極限是1百萬棵樹,現在又硬加上一筆資料,所以現在極限要在+2
		int combo=1;
		for(int i=0;i<n;i++) ///i=1 -> i=0 
		{
			if(strcmp(tree[i],tree[i+1])==0) combo++; ///tree[i-1],tree[i] -> tree[i],tree[i+1]
			else
			{
				printf("%s ",tree[i]);            /// 1
				printf("%.4f\n",combo*100.0/n);   /// 2   2,1 -> 1,2
				combo=1;
			}
		}
	     ///printf("%.4f\n",combo*100.0/n);
	}
}
```
# 第七週
## 快速排序應用(哨兵)
```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[2001][80];
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",line[i]); ///只讀國家
		char other[80];
		gets(other); ///把名字清掉
	}                ///讓scanf不會讀到人名
	qsort(line,n,80,compare);
	line[n][0]=0;///讓最後一行有東西(哨兵)
	int combo=1;
	for(int i=0;i<n;i++)
	{
		if(strcmp(line[i],line[i+1])==0)
		{
			combo++;
		}
		else
		{
			printf("%s %d\n",line[i],combo);
			combo=1;
		}
	}
}
```
# 第八週
## 檔案(創建)
```C
#include <stdio.h>
#include <string.h>
char names[3][20];
int grades[3];
int main()
{
    char name[20];
    int grade;
    for(int i=0;i<3;i++)
    {
        scanf("%s",name);
        scanf("%d",&grade);
        strcpy(names[i],name); ///複製name到names[i]裡面
        grades[i]=grade;
    }
        ///變數(隨便取)
    FILE * fout=fopen("file.txt","w+");///w+代表創建檔案
    for(int i=0;i<3;i++)
    {
        printf("%s %d\n",names[i],grades[i]);
       fprintf(fout,"%s %d\n",names[i],grades[i]);
    }
}
```
## 檔案(讀入)
```C
#include <stdio.h>
#include <string.h>
char names[3][20];
int grades[3];
int main()
{
    FILE * fin=fopen("file.txt","r+");///r+讀入資料
    char name[20];
    int grade;
    for(int i=0;i<3;i++)
    {
        fscanf(fin,"%s",name);
        fscanf(fin,"%d",&grade);
        strcpy(names[i],name); ///複製name到names[i]裡面
        grades[i]=grade;
    }
    ///FILE * fout=fopen("file.txt","w+");
    for(int i=0;i<3;i++)
    {
        printf("%s %d\n",names[i],grades[i]);
        ///fprintf(fout,"%s %d\n",names[i],grades[i]);
    }
}
```
# 第九週
## (原來)泡泡排序法
```C
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,5,4,0};
int main()
{
    int N=10;

    for(int k=0;k<N;k++)
    {
        for(int i=0;i<N-1;i++)
        {
            if(grade[i]<grade[i+1])
            {
                int temp=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=temp;
            }
        }
        for(int i=0;i<N;i++) printf("%d ",grade[i]);
        printf("\n");
    }
}
```
## (減少迴圈數)泡泡排序法
```C
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,5,4,0};
int main()
{
    int N=10;

    for(int k=0;k<N;k++) ///不知道要跑幾次就用while(已經有change可以判斷結束迴圈)
    {
        int change=0; ///用來判斷排好了沒
        for(int i=0;i<N-1;i++)
        {
            if(grade[i]<grade[i+1])
            {
                int temp=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=temp;
                change++; ///還沒排好
            }
        }
        if(change==0) break; ///排好了就不再跑了
        for(int i=0;i<N;i++) printf("%d ",grade[i]);
        printf("\n");
    }
}
```
## 字串交換strcpy()
```C
#include <stdio.h>
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
				strcpy(tempName,name[i]); ///右邊copy到左邊( tempName = name[i] )
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
```
## 字串的strcmp()
```C
#include <stdio.h>
#include <string.h>
char strA[]="ABC";
char strB[]="ABCD";
int main()
{
    int c=strcmp("B","C"); ///可以看成 B - C
    printf("B - C 得到 %d\n",c);
    c=strcmp(strA,strB);
    printf("%s %s 得到 %d\n",strA,strB,c);
}
```
# 第十週
## C++的class(不知道在幹嘛)
```C
#include <stdio.h>
#include <vector> ///std::vector<>
#include <algorithm> ///std::sort()
class Student ///(大寫)把這當作是一種像int、char的格式
{
public: ///公開給別人用,所以main()可以存取裡面的資料
    char name[30];
    int grade;
}; ///注意要有 ;
Student student[100]; ///有100個(大寫)Student,叫做(小寫)student
bool compare(Student a,Student b)
{
    return ( a.grade> b.grade);
}
int main()
{
    FILE * fin=fopen("input.txt","r");
    int N;
    fscanf(fin,"%d",&N);

    std::vector<Student> student(20);

    for(int i=0;i<N;i++)
    {
        fscanf(fin,"%s %d",student[i].name,&student[i].grade);
    }

    std::sort( student.begin(), student.end(), compare);

    for(int i=0;i<N;i++)
    {
        printf("%s %d\n", student[i].name, student[i].grade);
    }
}
```
# 第11週
## fgets()
```C
#include <stdio.h>
char line[100];
int main()
{
    int T;
    FILE * fin=fopen("input.txt","r");
    fscanf(fin,"%d",&T);
    printf("你讀到了T:%d\n",T);
    while(fgets(line,100,fin)) ///fgets(字串,長度,資料)
    {                          ///fgets會讀進跳行
        printf("讀到了=%s=\n",line);
    }
}
```
## map & string & table
```C
#include <stdio.h>
#include <string.h>
#include <map> ///std::map<左邊,右邊> 左邊對照到右邊
#include <string> ///沒有 .h
char line[100];
int main()
{
    int T;
    FILE * fin=fopen("input.txt","r");
    fscanf(fin,"%d",&T);
    std::map<std::string,int> table; ///把table裡的字串看成整數
    while(fgets(line,100,fin)) ///fgets(字串,長度,資料)
    {                          ///fgets會讀進跳行
        line[strlen(line)-1]=0; ///把每行的字串結尾去掉(也就是跳行去掉)
        printf("讀到了= %s =\n",line);
        table[line]++;
    }
}
```
# 第十二週
## C++的STL
```C
#include <stdio.h> ///C
#include <vector> ///C++
#include <algorithm> ///C++
class Student
{
public:
	char name[30];
	int grade;
};
bool compare(Student a,Student b) ///建立compare函式
{
	return (a.grade>b.grade);
}
int main()
{
	int N;
	scanf("%d",&N);
	std::vector<Student> stu(N);
	for(int i=0;i<N;i++)
	{
		scanf("%s %d",stu[i].name,&stu[i].grade);
	}
	std::stable_sort(stu.begin(),stu.end(),compare); ///排序,從stu開始,stu結束,用compare函式
	for(int i=0;i<N;i++)
	{
		printf("%s %d\n",stu[i].name,stu[i].grade);
	}
}
```
## in,out,stream( >> , << )
```C
#include <iostream>
int main()
{
	int N;
	std::cin>>N;
	std::cout<<"I got N:"<<N;
	   ///printf("I got N:");
	   ///         printf("%d",N);
	   ///printf("I got N:%d", N);
	return 0;
}
```
## using namespace 和 endl
```C
#include <iostream>
using namespace std; ///之後都能省略std::
class Student
{
public:
	char name[30];
	int grade;
};
Student stu[100];
int main()
{
	int N;
	cin>>N; ///std裡面的cin
	for(int i=0;i<N;i++)
	{
		cin>>stu[i].name;
		cin>>stu[i].grade;
	}
	for(int i=0;i<N;i++)
	{
		cout<<stu[i].name<< " ";
		cout<<stu[i].grade<<endl; ///end line
	}
	return 0;
}
## vector
```C
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; ///有一串東西,每格是int的形式(有點像陣列)
                   ///但沒說有幾格,預設為0格
    v.push_back(10); ///在v串裡加入10,加大一格
    v.push_back(20); ///在v串裡加入20,再加大一格
    v.push_back(30); ///在v串裡加入30,再加大一格
    for(int i=0;i<3;i++)
    {
        cout<<v[i];
        cout<<endl;
    }
}
```
# 第十三週
## 
