// #include <stdio.h>
// #include <string.h>

// #define SIZE 81
// #define LIM 5

// // 函数原型声明
// char* s_gets(int j, int n, char (*st)[SIZE]);
// void zhizhen(char* st[], int len);

// int main(void)
// {
//     char input[LIM][SIZE]; // 二维数组：存储真实字符串
//     char* put[LIM];        // 指针数组：存储指向字符串的指针
//     int ct = 0;

//     printf("请输入最多 %d 个字符串（直接按回车停止）：\n", LIM);

//     // 录入阶段：建立指针映射
//     while (ct < LIM && s_gets(ct, SIZE, input) != NULL && input[ct][0] != '\0')
//     {
//         put[ct] = input[ct]; // 指针指向对应字符串首地址
//         ct++;
//     }

//     // 排序阶段：仅交换指针，不移动字符串内容
//     zhizhen(put, ct);

//     // 输出阶段：按排序后的指针顺序输出
//     printf("\n排序结果：\n");
//     for (int k = 0; k < ct; k++)
//     {
//         puts(put[k]);
//     }

//     return 0;
// }

// // 安全读取字符串函数
// char* s_gets(int j, int n, char (*st)[SIZE])
// {
//     char* ret_val = fgets(st[j], n, stdin);

//     if (ret_val != NULL)
//     {
//         int i = 0;
//         while (st[j][i] != '\n' && st[j][i] != '\0')
//             i++;

//         if (st[j][i] == '\n')
//             st[j][i] = '\0';
//         else
//             while (getchar() != '\n')
//                 continue;
//     }
//     return ret_val;
// }

// // 指针数组排序函数（字典序降序）
// void zhizhen(char* st[], int len)
// {
//     char* temp;
//     for (int j = len - 1; j > 0; j--)
//     {
//         for (int i = 0; i < j; i++)
//         {
//             if (strcmp(st[i], st[i+1]) < 0)
//             {
//                 temp = st[i];
//                 st[i] = st[i+1];
//                 st[i+1] = temp;
//             }
//         }
//     }
// }