// // #include<stdio.h>
// // void daoxu(int num[],int len);
// // int main()
// // {
// //     int a;
// //     printf("数字共：");
// //     scanf("%d",&a);
// //     int num[a];
// //     int i = 0;
// //     printf("倒序的数目为%d\n",a);
// //     while(i<a)
// //     {
// //         printf("请输入第%d个数\n",i+1);
// //         scanf("%d",&num[i]);
// //         ++i;
// //     }
// //    for(int b = 0;b<a;b++)
// //     printf("%d ",num[b]);
// //     printf("\n");
// //     int len = sizeof(num)/sizeof(num[0]);
// //     printf("倒序数字为");
// //     daoxu(num,len);
// //     return 0;
// // }
// // void daoxu(int num[],int len)
// // {
// //     for(int i = 0;i<len;i++)
// //     printf("%d ",num[len-1 - i]);
// // }以下为简化版while(scanf)应用
// #include<stdio.h>
// int main()
// {
//     int sum = 0,a =0,num;
//     float index = 0;
//     printf("请输入运算数\n");
// printf("输入q停止\n");
//     while(scanf("%d",&num))
//     {
//         sum = sum+num;
//         a++;
//     }
//     index = (float)sum/a;
//     printf("总和为%d,平均数为%.2f",sum,index);
//     return 0;
// }
//     //控制循环递进与终止
// // #include<stdio.h>
// // void xunhuan(int a,int sum);
// // int main()
// // {
// //     int a = 'A';
// //     int sum = 0;
// //     xunhuan(a,sum);
// //     return 0;
// // }
// // void xunhuan(int a,int sum)
// // {
// //     for(int i = 0;i<6;i++)
// //     {
// //         sum = sum+i;
// //         for(int j =2;j+i>0;j--)
// //         { printf("%c",a+sum+2-j);
// //             char z = a+sum+2-j;
// //             if(z == 'Z')
// //             return; }
// //         sum = sum+1;
// //         printf("\n"); }}
// #include <stdio.h>
// //优化版本
// int main() {
//     char ch = 'A';          // 当前要输出的字母
//     int lines = 6;          // 打印 6 行（长度从 2 到 7）

//     for (int i = 0; i < lines; i++) {
//         int count = i + 2;  // 本行字符数：2,3,4,5,6,7
//         for (int j = 0; j < count; j++) {
//             if (ch > 'Z') break;   // 防止超出字母表
//             printf("%c", ch++);
//         }
//         printf("\n");
//         if (ch > 'Z') break;       // 字母用完则提前结束
//     }
//     return 0;
// }