// #include<stdio.h>

// int main()
// {
//     int a;
//     for(a = 1;a<=5;a++)
//     {
//         printf("%d",a);
//     }
//     return 0;

// }
//  c
// int main()
// {
//     int num;
//     printf("请输入\n");
//     scanf("%d",&num);
//     int a = 0;
//     printf("约数为；");
//     for(int i=2;i*i<= num;i++)
//     { 
//         if(num%i == 0 && i*i != num)
//         {
            
//             printf("%d,%d,",i,num/i);
// a++;
//         }
//         else if(i*i == num)
//        { printf("%d",i);
//         a++;}
//     }
//     if(a = 0)
//     printf("NULL");
//     return 0;
// }
// #include<stdio.h>
// void dayin(char a,int b,int c);
// int main()
// {
//     char ch;
////标准输出类while((ch = getchar())!= EOF)
////putchar(ch);
//     int chang,kuan;
//     printf("请输入字符\n");
//     ch = getchar();
//     while(getchar() != '\n');//清空'\n'缓冲区,用;终止
//     printf("请输入长，宽");
//     scanf("%d,%d",&chang,&kuan);
//     printf("长，宽分别为%d,%d\n",chang,kuan);
//     dayin(ch,chang,kuan);
//     return 0;
// }
// void dayin(char a,int b,int c)
// {
//     for(int i =0;i<b;i++)
//     {
//         for(int j = 0;j<c;j++)
//         {
//             printf("%c ",a);
//         }
//         printf("\n");
//     }
// }
////getchar应用
// #include<stdio.h>
// int main(void)
// {
//     char ch;//与scanf类似读取输入字符（串）可含空格
//     while((ch = getchar()) != '\n')
//     {//函数只能读一个，通过while循环实现多个
//         if (ch != '\n')
//         putchar(ch+1);//输出相应字符（串）
//         else
//         putchar(ch);
//     }
//     putchar(ch);
//         return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int arr1[] = {1,2,3,4,5,6,7,8,9};
//     int arr2[8];
//     int num;
//     printf("请输入要跳过的数组数为第   个\n");
//     scanf("%d",&num);
//     printf("要跳过的数组数为第%d个\n",num);
//     int len = sizeof(arr1)/sizeof(arr1[0]);
//     for(int i = 0;i<len;i++)
//     {
//         if(i<num-1)
//         {arr2[i] =arr1[i];}
//         else if(i>num-1)
//         {arr2[i-1]=arr1[i];}
//         else
//         continue;
//     }
//     for(int i = 0;i<len-1;i++)
//     {printf("%d ",arr2[i]);}
//     return 0;
// }
////数组查数
// #include<stdio.h>
// int main()
// {
//     int n1,n2,num1,num2;
//     int arr1[]={1,2,3,5,6,7,8,9};
//     int arr2[10];
//     int len = sizeof(arr2)/sizeof(arr2[0]);
//     printf("插入两个数分别在第？，？位\n");
//     scanf("%d,%d",&n1,&n2);
//     printf("插入两个数分别为?,?\n");
//     scanf("%d,%d",&num1,&num2);
//     if(n1<1||n2>10||n1>n2)
//     for(int i = 0;i<len;i++)
//     {
//         if(i<n1-1)
//         {arr2[i] =arr1[i];}
//         else if(i == n1-1)
//         {arr2[i]=num1;}
//         else if(i > n1-1 && i<n2-1)
//         {arr2[i] = arr1[i-1];}
//         else if(i == n2-2)
//         {arr2[i]=num2;}
//         else
//         {arr2[i] =arr1[i-2];}
//     }
//     for(int a = 0;a<10;a++)
//     {
//         printf("%d ",arr2[a]);
//     }
//     return 0;
// }
