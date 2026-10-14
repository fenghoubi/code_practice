// #include<stdio.h>//冰雹猜想
// int yanzheng(int* arr[],int num);
// int main()
// {
//     int num = 0;
//     int arr[20] = {0};
//     int*arr0[20];
//     for(int i = 0;i<20;i++)
//     arr0[i] = &arr[i];
//     printf("请输入数字\n");
//     scanf("%d",&num);
//     printf("输入数字为%d\n",num);
//     int len = yanzheng(arr0,num);
//     printf("输入如下\n");
//     printf("%d\n",arr[0]);
//     for(int i = 0;i<len;i++)
//     printf("%d ",arr[len-1-i]);
//     printf("%d",num);
//     return 0;
// }
// int yanzheng(int* arr[],int num)
// {
//     int i = 0;
//     while(num!=1)
//     {
//         if(num %2 == 1 && i<20)
//         num = num*3+1;
//         else
//         num = num/2;
//         *arr[i] = num;
//         i++;
//     printf("第%d个数字为%d\n",i,num);
//     }
//     return i;
// }
// int changdu(int arr[0])
// {
//     int len = 0;
//     for(int i = 0;arr[i] != 0;i++)
//     len++;
//     return len;
// }