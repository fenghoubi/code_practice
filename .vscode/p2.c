// #include<stdio.h>
// #include<string.h>
// #define SIZE 81
// #define HALT " "
// // void dexchange(char* st[SIZE],int m);
// // void exchange(char*st);
// char*  s_gets(int j,char (*st)[SIZE]);
// int main()
// {
//     char input [5]
//     // char(*p)[]=&input;
//     char* put[5];
//     int len = 5;
//     for(int j =0;j<5;j++)
//     {
//         printf("请录入要打印的%d字符串\n",j);
//         s_gets(j,input);
//         put[j]=input[j];
//     for(int j =0;j<5;j++)
//     {printf("请输入要打印的%d字符串\n",j);
//     fputs(input[j],stdin);}
//     puts("\n");
// }
//     // exchange(input);
//     zhizhen(put,len);
//     for(int j =0;j<5;j++)
//     {ptintf("请输入要打印的%d字符串\n",j);
//     fputs(put[j],stdout);
// puts("\n");}
//     return 0;

// }
// char*  s_gets(int j,char(*st)[SIZE])
// {
// char* ret_val;
// ret_val = fgets(st[j],SIZE,stdin);
// if (ret_val != NULL)//防止读取错误
// {int i = 0;
// while(st[j][i]!= NULL&&st[j][i]!='\0')
// i++;
// if(st[j][i] == '\n')//出现说明提前按下enter,替换
// st[j][i] = '\0';}
// else//出现等于'\0',未结束，清空缓冲区
// while(getchar()!='\0')
// continue;
// return ret_val;
// }
// void zhizhen (char*st[],int len)
// {
//     char* temp;
//     for(int j=len-1;j>0;j--)
//     {for(int i = 0;i<j;i++)
//     {
//         if(st[i][0]<st[i+1][0])
//         {temp = st[i];
//         st[i]=st[i+1];
//         st[i+1]=temp;}
//     }}
// }
// void dexchange(char* st[][SIZE],int m)
// {
//     for(int j = 0;j<m-1;j++)
// {
//         for(int i =0;i<j;i++)
//         {
//             //
//             if(st[j+1][0]>st[j][0])
//         {
//             char temp[SIZE];
//             strcpy(temp,st[i]);
//             strcpy(st[i],st[i+1]);
//             strcpy(st[i+1],temp);
//         }

//     }}
// }
// void exchange(char*st)
// {//本质为指针的变量大小，固定不变，无法这样计算长度
//  //   int len = sizeof(st)/sizeof(st[0]);
//       int len = string(st);
//     for(int i =0;i<len;i++)
//     {
//         if(st[i]>st[0])
//         {
//             char temp;
//             temp = st[0];
//             st[0]=st[i];
//             st[i]=temp;
//         }
//     }
// }