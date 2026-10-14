// #include<stdio.h>
// int binarysearch(int arr[],int len,int num) 
// {
//     int min =0;
//     int max = len-1;
//     while(min<=max)
//     {
//         int mid = (min+max)/2;
//         if(num ==arr[mid])
//         {
//             return mid;
//         }
//         else if(num >arr[mid])
//         {
//             min = mid+1;
//         }
//         else
//         {
//             max = mid -1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {1,23,46,79,137,148,255,345,657,999};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int num = 46;
//     int end = binarysearch(arr,len,num);
//     printf("%d\n",end);
//     return 0;
// }