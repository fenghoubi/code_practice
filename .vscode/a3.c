// #include<stdio.h>
// void yanghui(int*arr1[],int*arr2[],int len);
// int main()
// {
//     int num = 0;
//     printf("请输入行数\n");
//     scanf("%d",&num);
    // for(int i = 1;i<=num;i++)
    // {
    //     int arrni[i];
    //     int* arri[i];
    //     arrni[0] = 1;
    //     for(int j = 0;j<i;j++)
    //     arrni[j] = &arri[j];
    //     for(int j = 0;j<(i-1);j++)
    //     {
    //         yanghui(arrni,arrn(i+1),i);
    //     }
    //     for(int j = 0;j<i;j++)
    //     printf("%d ",arrni[j]);
    //     printf("\n");
    // }
//     for(int i = 0;i<num;i++)
//     {
//         int arr1[i];
//         int arr2[i+1];
        
//     }
// void yanghui(int*arr1[],int* arr2[],int len)
// {
//     for(int i = 0;i<len;i++)
//     *arr2[i] = *arr1[i] + *arr1[i-1];
//     *arr2[len] = 1;
// }