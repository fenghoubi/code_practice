// #include<stdio.h>
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int* p1 = &arr [0];// == arr
//     printf("%p\n",(void*)p1);//p1也行
//     int* p2 = p1 + 1;//所加1为size of(int)个字节
//     int* *pp1 = p1;//*pp1 等价于p1
//     printf("%d\n",*p2);//对应地址的内容（数值）
//解引用，打印的是指针指向内存空间的数据
//     printf("%d\n",* *pp1);//两次解引用，第一次得到指
//针p1指向内存空间地址，再次解引用, == *(arr[0])
//与p2等效
//int *p = arr;//退化
//int *p0 = &arr[0];//两者等效
// printf("%p\n",(*p1+1));//地址 == arr[1]
// printf("%p\n",(void*)p1);//地址
// printf("%td\n",(char*)p2 - (char*)p1 );//指针差字节数
// printf("%td\n",(p2-p1)*sizeof(int));//指针差字节数
// printf("%td\n",p2-p1);//指针差元素数
// printf("%zu",sizeof p1);//打印指针本身占用内存大小（字节）8
// printf("%zu",sizeof arr);//打印数组大小（内存）
// printf("%zu",sizeof *p1);//打印指针指向元素大小
//printf("%d\n",*p1);//对应内存空间数据
// return 0;
// }
/*
指针+/-为移动步
指针-指针为间隔步长
二级指针int**---(int*) *
*/
// //地址；%p (void*)p1
//数组指针细节
// #include<stdio.h>
// int main()
// {
// int arr[]={1,2,3,4,5};
// int *p1 = arr;//指针为首地址，步长为数据类型
// int *p = arr[0];
// int *p2 = arr+1;
// int *p3 = &arr;//指针为首地址，步长为数据类型*len
//对于标准定义指针
//int a = 0;int* p4 = &a;要加&
// printf("%zu\n",arr);

// return 0;
// }
