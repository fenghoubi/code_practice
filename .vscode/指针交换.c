// #include<stdio.h>
// void exchange(int *p1,int *p2)
// {
//     int temp;
//     temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }
// int main()
// {
//  int arr[] ={1,2};
//     printf("%d,%d\n",arr[0],arr[1]);
//     exchange(&arr[0],&arr[1]);
//     printf("%d,%d\n",arr[1],arr[0]);
//     return 0;
// }
//若函数内是指针，只需输入对应的内存空间（变量/数组内元素）
//函数将所转换指针指向输入的内存空间
// include<stdio.h>
// int main()
// //void类型可接受任意类型指针
// void exchange(void *p1,void*p2,int len)
// {
//     int*char pc1 = p1;
//     int*char pc2 = p2;
//     for(int i = 0;i <len;i++)
//     {
//         int temp = pc1;
//         pc1 = pc2;
//         pc2 = temp;
//         //每次交换sizeof(char)个字节（1个）
//         //根据种类修改len即可
//     }

// }
