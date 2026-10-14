// #include<stdio.h>
// int* exchange(int *arr,int len)
// {
//     int min = arr[0];//arr[0]设为初始值
//     int max = arr[0];
//     for(int i;i<len;i++)
//     {
//         if(arr[i]<=min)
//         {
//             min = arr[i];
//         }
//         if(arr[i]>=max)
//         {
//             max = arr[i];
//         }
//     }
//     static int result[2];
//     result[0]=min;
//     result[1]= max;
//     return result;
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,13,45,67,89};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     //res 为返回的result
//     int* res = exchange(arr,len);//必须借助函数，否则函数无效
//     printf("max = %d,min = %d\n", res[1],res[0]);
//     int arr1[3][5] = {
//         {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}
//     };//3为数组数，5为一维数组元素数,此为二维数组，无需加*
//     int arr2[]={2,3,4};
//     int arr3[]={3,4,5};
//     int* arr4[]={arr2,arr3};//int*为数据类型
//     //表示是整= 型指针，arr4为指针（的）数组，记录arr2,arr3的地址
//     //即arr4[0]=arr2;arr4[1]=arr3;
//     //即arr4中两个元素分别是数组arr2,arr3(的首地址)
//     int*p = arr;//一级指针，记录数组arr地址，（首元素地址）
//     //步长为sizeof(int)
//     int* p1 =&arr;//此为步长为len*sizeof(int)的真数组地址
//     int* *arr5=&p;//二级指针，记录一级指针p地址，arr5直接
//     //为指针名，无需加入[]
//     
//     int c =0;
//     *arr5 = &c;
// return 0;
// }