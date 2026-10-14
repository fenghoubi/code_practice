// #include<iostream>
// using namespace std;//未使用名称空间无法使用名称空间内函数
// //double sumAndMax(int arr[],int n,int*max)
// //返回值类型错误,int型;
// int sumAndMax(int arr[],int n,int*max)
// {
//     //int sum;//未初始化,指向内存空间的数据未知
//     int sum = 0;
//     *max = arr[0];
//     for(int i = 0; i<= n; i++)
//     {
//         sum += arr[i];
//         if(arr[i]>*max)
//         {*max = arr[i];}
//     }
//     return sum;
// }
// int main()
// {
//     int a[5]={2,8,1,6,4};
//     int max;
//     //int sum = sumAndMax(a,5,max)
//     //传入形参为地址,*int需要地址，形参类型不匹配
//     int sum = sumAndMax(a,5,&max);
//     cout<<"sum="<<sum<<" ,max="<<max<<endl;
//     return 0;
// }
