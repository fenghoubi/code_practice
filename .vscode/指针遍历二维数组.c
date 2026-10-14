// #include <stdio.h>

// int main() {
//     char str[100];
//     scanf("%s", str);
//     for (int i = 0; str[i] != '\0'; i++) {
//         printf("%c", str[i]);
//     }
//     return 0;
// }

// char str1[4]= {'a','b','c','\0'};//
// char str2[4]= "abc";
// char str3[]= "abc";
// char* str4[]= "abc";//特殊，只读常量区，不可修改
// #include<stdio.h>
// int main()
// {
    // char str1[]= "zhangsan";
    // char str2[]= "lisi";
    // char str3[]= "wangwu";
    // char str[3][20]={"zhangsan","lisi","wangwu"};
    // for(int i = 0;i<3;i++)//定义必须直接写数组，若写数组名会
    // {
    //     printf("%s\n",str[i]);//打印时无需输入第二个[],否则报错;
    // }//退化为地址
    // char*ARR[]={"zhangsan","lisi","wangwu"};//指针数组，装个字符数组首字符地址
    // char**p =ARR;
    // for(int i = 0;i<3;i++)
    // {
    //     int j = 0;
    //     while(*(*p+j) != '\0' )//ARR[i][j] != '\0'
    //     {
    //         printf("%c",*(*p+j));//ARR[i][j]
       
    //     j++;
        
    //     }
    //     p++;
    //     printf("\n");
    // }
//     for(int i = 0;i< 3;i++)
//     {
//         printf("%s\n",*(p+i));
//     }


//     return 0;
// }
// #include<stdio.h>
// int average(int ch[3][5],int n1);
// void get(int arr[3][5]);
// int main()
// {
//     char q;
//     int arr[3][5];
//     int n1;
//     get(arr[3][5]);
//     printf("求平均数组数\n");
//     do
//     {
//     scanf("%d",&n1);
//     printf("求第%d组平均数\n",n1);
//     if((n1-1)>=0&&(n1-1)<=3)
//     {
//     float ave = average(arr[3][5],n1);
//     printf("average = %d\n",ave);
// }
//     else
//     printf("try again\n");
//     printf("输入q离开,输入数字继续\n");}
//     while(getchar()!=q);
//     return 0;
// }
// void get(int arr[3][5])
// {
//     for(int i = 0;i<3;i++)
//     {
//         for(int j = 0;j<5;j++)
//         {
//             printf("请输入第%d行第%d个数\n",i+1,j+1);
//             scanf("%d",&arr[i][j]);
//         }
//         for(int j = 0;j<5;j++)
//         printf("%d ",arr[i][j]);
//         printf("\n");
//     }
// }
// int average(int arr[3][5],int n1)
// {
//     int sum = 0;
//     for(int i = 0;i<3;i++)
//     {
//         sum = sum+arr[n1][i];
//     }
//     printf("sum = %d\n",sum);
//     return (float)sum/5.0;
// }
