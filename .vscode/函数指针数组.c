// #include <stdio.h>

// void method1() {
//     printf("method 1");
// }

// void method2(int num1, int num2) {
// printf("%d\n", num1 + num2);
// }

// int main() {
//     void (*p1)(void) = method1;   // 修正声明
//     void (*p2)(int, int) = method2;

//     p1();
//     p2(1, 2);

//     return 0;
// }

// #include<stdio.h>
// int add(int n1,int n2)
//     {
//         return n1+n2;
//     }
// int substruct(int n1,int n2)
//     {
//         return n1-n2;
//     }
//     int mutiply(int n1,int n2)
//     {
//         return n1*n2;
//     }
//     int divide(int n1,int n2)
//     {
//         return n1/n2;
//     }
// int main()
// {
//     int num1,num2,shift;
//     printf("number\n");
//     scanf("%d,%d",&num1,&num2);
//      printf("choose\n");
//      scanf("%d",&shift);
//     int(*p[4])(int,int)={add,substruct,mutiply,divide};
//     定义一个装四个函数指针的数组，p[4]才是数组，p是名称
// int end = p[shift-1](num1,num2);//选择调用函数
//     printf("equal %d\n",end);
//         return 0;
//     }

    

