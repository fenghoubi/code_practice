// #include<stdio.h>//open lights
// #include<stdlib.h>
// int main()
// {
//     int num = 0;
//     printf("请输入行数\n");
//     int* p = calloc(200000,sizeof(int));
//     if(p == NULL)
//     {printf("wrong\n");
//     return -1;}
//     if(scanf("%d",&num) == 1)
//    {
//     for(int i = 0;i<num;i++)
//     {double a;
//     int t;
//     if(scanf("%lf,%d",&a,&t) == 2)
//     {
//         for(int j = 1;j<=t;j++)
//         {
//             if((int)(a*t<=200000))
//             {if(p[(int)(a*j)] == 0)
//             p[(int)(a*j)] = 1;
//             else
//             p[(int)(a*j)] = 0;}
//         }
//     }
//     else
//     {
//         printf("输入错误");
//         return -1;
//     }
// }
//     for(int i= 1;i<200001;i++)
//     {if(p[i] == 1)
//     printf("编号为%d\n",i);
//     break;}
//    }
//    free(p);
//    p = NULL;
//    return 0;
// }


// #include<stdio.h>//P1115
// #include<stdlib.h>
// int main()
// {
//     printf("请输入长度\n");
//     int num = 0;
//     if(scanf("%d",&num) == 1 && (num<=200000&&num>=1))
//     {
        
//         int*p = (int*)calloc(200000,sizeof(int));
//         if(p == NULL)
//         {printf("wrong\n");
//         return -1;}
//         for(int i = 0;i<num;i++)
//         {
//             printf("输入第%d个数\n",i+1);
//             if(scanf("%d",&p[i]) != 1 ||p[i]>10000 ||p[i]<-10000)
//             {i--;
//             printf("输入失败，请重试\n");
//             while(getchar()!='\n')
//             continue;}
//         }
//         int sum = 0;
//         for(int i = 0;i<num;i++)
//         {printf("%d ",p[i]);
//         sum += p[i];}
//         printf("\n");
//         int max1 = sum;
//         int temp = sum;
//         int n =0;
//         for(int i = 0;i<num;i++)
//         {
//             temp = temp - p[i];
//             if(temp >=max1)
//             {max1 = temp;
//             n = i+1;}
//         }
//         int max2 = max1;
//         for(int i = 0;i<num-n;i++)
//         {
//             max1 = max1 - p[num-1-i];
//             if(max1>max2)
//             max2 = max1;
//         }
//         printf("最大长度为%d\n",max2);
//         free(p);
//         p = NULL;
//     }
//     else
//     {printf("格式错误，请重试\n");
//     while(getchar()!='\n')
//     continue;
// }
// return 0;
// }
#include<stdio.h>//P1320
#include<string.h>
#include<stdlib.h>
char*  s_gets(char*st,int n);
int main()
{
    int n = 0;
    printf("输入方阵边长\n");
    char square[8][8];
    if(scanf("%d",&n)==1 &&n>=3 && n<=7)
    {
        while(getchar() !='\n')
        continue;
        for(int i = 0;i<n;i++)
        {printf("请输入第%d行数字\n",i+1);
        s_gets(square[i],n+1);}
        printf("数阵如下\n");
        for(int i = 0;i<n;i++)
        puts(square[i]);
        int temp = 1;
        int num = n*n+1;
        char*len = (char*)calloc(num,sizeof(char));
        if(len == NULL)
        {printf("wrong");
        return -1;}
        int k = 0;
        // strcat(len,square[i]);//stract读取截止至'\0',实际无，所以出现跳读现象，因为未进行初始化
        for(int i = 0;i<num-1;i++)
        {for(int j = 0;j<num-1;j++)
        {len[k] = square[i][j];
        k++;}}
        for(int i = 0;i<num-1;i++)
            {if(len[i] == len[i+1])
            temp++;
            else
           { printf("%d ",temp);
            temp = 1;}
        }
        printf("%d\n",temp);
        free(len);
        len = NULL;
        return 0;
    }
}
char*  s_gets(char*st,int n)
{
char* ret_val;
ret_val = fgets(st,n,stdin);
int i = 0;
if(ret_val != NULL)//防止读取错误
{
while(st[i]!='\0' &&st[i]!='\n')
i++;
if(st[i] == '\n')//出现说明提前按下enter,替换
{st[i] = '\0';
i++;}
else//出现等于'\0',未结束，清空缓冲区
while(getchar() !='\n')
continue;}
return ret_val;
}
