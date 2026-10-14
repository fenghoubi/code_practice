// #include<stdio.h>//统计连续数字长度
// void gain_num(int* arr[],int len);
// int acquire_length(int* arr[],int len);
// int main()
// {
//     int num;
//     printf("请输入数量\n");
//     scanf("%d",&num);
//     int arr[num];
//     int*arr0[num];
//     for(int i =0;i<num;i++)
//     arr0[i] = &arr[i];
//     gain_num(arr0,num);
//     int len = acquire_length(arr0,num);
//     printf("最大连续长度为%d\n",len);
//     return 0;
// }
// void gain_num(int* arr[],int len)
// {
//     if(len>0&&len<10000)
//     {
//         for(int i =0;i<len;i++)
//         {
//         printf("请输入%d个数字\n",i+1);
//         //scanf("%d",arr[i]);if中一步到位,防止读取2次
//         if(scanf("%d",arr[i])!=1)//arr[i]本身是指针指向地址
//        {//scanf作用是给出地址的值，无需加&表示指针地址，否则用%p类型
//         printf("输入非法\n");
//         int c;
//         while((c = getchar())!='\n')
//         continue;
//         i--;
//         //return;
//         continue;//跳过循环不是结束函数
//         }
//         if(*arr[i]<=0 ||*arr[i]>1000000000)
//        {printf("try again\n");
//         i--;}
//         }
//         for(int i =0;i<len;i++)
//         printf("%d ",*arr[i]);
//         printf("\n");
//     }
// }
// // int acquire_length(int* arr[],int len)
// // {
// //     int length = 1;
// //     int max[len];
// //     max[0]=0;
// //     for(int i =0;i<len-1;i++)
// //     {
// //         if(*arr[i]+1 == *arr[i+1])//arr[i]本身是指针，不能比较地址，解引用
// //         length++;
// //         else
// //         max[i+1] = length;
// //         length = 1;
// //     }
// //     int temp =max[0];
// //     for(int i = 0;i<len;i++)
// //     {
// //         if(max[i]>temp)
// //         temp = max[i];
// //     }
// //     return temp;
// // }
// int acquire_length(int* arr[], int len)
// {
//     int max_len = 0;
//     int cur_len = 1;
    
//     for (int i = 0; i < len - 1; i++)
//     {
//         if (*arr[i] + 1 == *arr[i+1])
//         {
//             cur_len++;
//         }
//         else
//         {
//             if (cur_len > max_len)
//                 max_len = cur_len;
//             cur_len = 1;
//         }
//     }
//     // 处理末尾连续序列
//     if (cur_len > max_len)
//         max_len = cur_len;
    
//     return max_len;
// }