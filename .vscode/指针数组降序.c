// #include<stdio.h>
// #include<string.h>
// void find_max(int len,char* st[]);//指向二维数组中首个一维数组
// int main()
// {
//     char input[][81]={"Zebra","Apple","Mango","C "};

//     int len = sizeof(input)/sizeof(input[0]);
//     char* st[len];//指针数组
//     for(int i =0;i<len;i++)
//     {st[i]=input[i];//对应一维数组地址
//     fputs(input[i],stdout);
// printf("\n");}
//     find_max(len,st);
//      for(int i =0;i<len;i++)
// {    fputs(input[i],stdout);
//     printf("\n");}
//     return 0;}
// void find_max(int len,char* st[])
// {
//     for(int i = len-1;i>0;i--)
//    { for(int j =0;j<i;j++)
//    { if(strlen(st[j])>strlen(st[j+1]))
//     {char* temp;
//     temp = st[j];
//     st[j]=st[j+1];
//     st[j+1]=temp;}}}
//  }
//  char* max( char* st[],int len)
//  {
//     char* temp =st[0];
//     for(int i = 1;i<len;i++)
//     {
//         if(strcmp(temp,st[i])<0)
//             temp = st[i];
//     }
//     return temp;
//  }
 // #include<stdio.h>
// #include<string.h>
// void compare(int arr1[],int arr2[]);
// int main()
// {

// }
// void compare(int arr1[],int arr2[])
// {
//     int len = sizeof(arr1)/sizeof(arr1[0]);
//     if(strlen(arr1) != strlen(arr2) )
//     printf("no,they aren't equal");
//     else
//     {
//         for(int i =0;i<len;i++)
//         {
//             if(arr1[i] != arr2[i])
//             {printf("no,they aren't equal");
//             return;}
//         }
//         printf("")
//     }
// }
// #include<stdio.h>
// #include<string.h>
// void find_max(int len,char* st[]);//指向二维数组中首个一维数组
// int main()
// {
//     char input[][81]={"Zebra","Apple","Mango","C "};

//     int len = sizeof(input)/sizeof(input[0]);
//     char* st[len];//指针数组
//     for(int i =0;i<len;i++)
//     {st[i]=input[i];//对应一维数组地址
//     fputs(input[i],stdout);
// printf("\n");}
//     find_max(len,st);
//      for(int i =0;i<len;i++)
//     fputs(input[i],stdout);
//     return 0;}
// void find_max(int len,char* st[])
// {
//     for(int i = len-1;i>0;i--)
//     for(int j =0;j<i;j++)
//    { if(strlen(st[j])>strlen(st[j+1]))
//     {char* temp;
//     temp = st[j];
//     st[j]=st[j+1];
//     st[j+1]=temp;}}
// }