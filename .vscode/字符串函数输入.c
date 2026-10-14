// #include<stdio.h>
// #include<string.h>
// int daxie(char*str)
// {
//     char str1[100] ="abc";
//     strcpy(str1,str);
//     char* str2 = strlwr(str);

//     char*p = str1;
//     int d = 0;
//     for(int i = 0;*(p+i) != '\0';i++)
//  {
//     if(*(p +i) != *(str2+i))
//     {
//         d++;
//     }
//     }
//     return d;
// }
// int xiaoxie(char*str)
// {
//     char str1[100] ="abc";
//     strcpy(str1,str);
//     char* str2 = strupr(str);
//     char*p = str1;
//     int d = 0;
//     for(int i = 0;*(p+i) != '\0';i++)
//  {
//     if(*(p +i) != *(str2+i))
//     {
//         d++;
//     }
//     }
//     return d;
// }
// int main()
// {
//     char str1[100];
//  char str2[100] = "123";

//     scanf(" %99s",str1);
//     char*p = str1;
//     strcpy(str2,str1);
//     int d = daxie(str1);
//     int x = xiaoxie(str2);
    
//     int s = strlen(str1) - d -x;
//     printf("大写有%d个\n小写有%d个\n数字有%d\n",d,x,s);
//     return 0;
// }
////通过指针传递数组，将导致原数组改变
// #include <stdio.h>
// #include <string.h>

// void countChars(const char *str, int *big, int *small, int *num) 
// {
//     *big = *small = *num = 0;  // 初始化
//     int len = strlen(str);
//     for (int i = 0; i < len; i++) {
//         char c = str[i];
//         if (c >= 'A' && c <= 'Z') {
//             (*big)++;
//         } else if (c >= 'a' && c <= 'z') {
//             (*small)++;
//         } else if (c >= '0' && c <= '9') {
//             (*num)++;
//         }
//         // 其他字符（空格、标点等）忽略
//     }
// }
