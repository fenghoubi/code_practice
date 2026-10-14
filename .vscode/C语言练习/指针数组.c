
// #include<stdio.h>
// int main()
// {int arr[4][5] ={
//         {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{4,5,6,7,8}};
//      int len = sizeof(arr)/sizeof(arr[0]);
//     int arr1[] = {1,2,3,4,5,6,7,8,9};
// //二维数组定义，先元素个数，后内部数组元素个数
//     for(int i = 0;i<len;i++)
//     {
//     for(int j = 0;j<5;j++)
//     {
//         printf("%d",arr[i][j]);
//     }
//     printf("\n");
//     }


//     printf("another\n");
//     int a1[]= {1,2,3,4,5};
//     int a2[]= {2,3,4,5,6};
//     int a3[]= {3,4,5,6,7};
//     int a4[]= {4,5,6,7,8};
//     int*arr3[] ={a1,a2,a3,a4};//一维指针数组，装的是数组的指针
//     int(*p1)[5] = arr;//指向整个二维数组的指针
//         int* *p2 = arr3;//p2是指向指针数组的指针
//     //二维数组地址只管第一个[]
//     for(int j = 0;j<len;j++)
//     {
        
        
//             for(int i = 0;i<5;i++)
//             {
//             printf("%d",*(*p2+i)); //偏移步长为sizeof(int)   
//         }//*p2 = *a2[0]
//         p2++;//偏移步长为sizeof(int)*len
//         printf("\n");//p2 =*&a2
//             }
//     return 0;  
// }