// #include<stdio.h>
// void dexchange(int arr[],int len);
// int main()
// {
//     int n1,n2,n3,n4 ;
//     printf("录入数字个数为4\n");
//     printf("输入录入数字\n");
//     scanf("%d,%d,%d,%d",&n1,&n2,&n3,&n4);
//     int arr[] ={n1,n2,n3,n4};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     dexchange(arr,len);
//     for(int i =0;i<len;i++)
//     {printf("%d ",arr[i]);}
//     return 0;
// }
// void dexchange(int arr[],int len)
// {
//     for(int i = len-1;i>=0;i--)
//     {
//         for(int j = 0;j<i;j++)
//         {
//             if(arr[j]<arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j]= arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }

// #include<stdio.h>
// void exchange(int num);
// int main()
// {
//     int num;
//     printf("请输入整数\n");
//     scanf("%d",&num);
//     exchange(num);
//     return 0;
// }
// void exchange(int num)
// {
//     int n1 = num%2;
//     if(num/2 >=2)
// {exchange(num/2);}
// putchar(n1 == 0? '0':'1');
// return;
// }
// void exchange(int num)
// {
//    int i =0;
//    int arr[32] ={0};
//    while(num>=1)
//    {
//     arr[i] = num%2;
//     i++;
//     num=num/2;
//    }
//    int a = i;
//    printf("%d\n",i);
//    int j =0;
//    for(;j<i-1; i--, j++)
//    {
//     int temp = arr[j];
//     arr[j]=arr[i-1];
//     arr[i-1]=temp;
//    }
//    for(int j =0;j<a;j++)
//    printf("%d",arr[j]);
// }
// void exchange(int num)
// {
//     int arr[32] ={0};
//     int i =0;
//     int n1 = num;
//     for(;num>=1;num = num/8)
//     {i++;}
//     printf("%d\n",i);
//     for(int j = 0;j<i;j++)
//     {
//         arr[j]=n1%8;
//         n1 = n1/8;
//     }
//     for(int k =0;k<i;k++,i--)
//     {
//      int temp = arr[k];
//     arr[k]=arr[i-1];
//     arr[i-1]=temp;
//     }
//     for(int j = 0;j<=i;j++)
//     {printf("%d",arr[j]);}
// #include<stdio.h>
// int main()
// {
//     char ch;
//     int i,j;
//     while((ch = getchar())!= '\n')
//     {scanf("%d,%d",&i,&j);
//     for(;i>0;i--)
//     {
//         for(int k =0;k<j;k++)
//         {printf("%c",ch);}
//         printf("\n");
//     }}
//     return 0;
// }
// #include<stdio.h>
// void Fabonace(int n1,int n2,int len);
// int main()
// {
//     int n1,n2,len;
//     printf("请输入a1,a2,长度\n");
//     scanf("%d,%d,%d,",&n1,&n2,&len);
//     Fabonace(n1,n2,len);
//     return 0;
// }
// void Fabonace(int n1,int n2,int len)
// {
//         int arr[len];
//     arr[0]=n1;
//     arr[1]=n2;
//     arr[2]=n1+n2;
//     printf("%d\n",arr[0]);
//     printf("%d\n",arr[1]);
//     printf("%d\n",arr[2]);
//     int sum = n1+n2;
//     for(int i = 3;i<len;i++)
//     {
//         arr[i]=sum+n2;
//         sum = sum+arr[i-1];
//         printf("%d\n",arr[i]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     char ch[100];
//     char ch1;
// int len = sizeof(ch)/sizeof(ch[0]);
//     printf("请输入字符串\n");
    // scanf("%s",ch);
    // printf("%s",ch);
//     while((ch1 = getchar()!= '\n'))
//     putchar(ch1);
//     printf("\n");
// for(int i =0;ch[i]!='\0';i++)
// {
//     if(ch[i]>='a'&&ch[i]<='z')
//     printf("大写,%c,%d\n",ch[i],ch[i]);
//     else if(ch[i]>='A'&&ch[i]<='Z')
//     printf("小写,%c,%d\n",ch[i],ch[i]);
//     else if(ch[i]>='0'&&ch[i]<='9');
//     else
//    printf("%c\n",ch[i]);
// }
// return 0;
// }