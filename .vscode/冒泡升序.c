// #include <stdio.h>

// // 冒泡排序（升序）
// void bubbleSort(int arr[], int len) {
//     for (int i = len - 1; i >= 0; i--) {         // 外层控制轮数
//         for (int a = 0; a < i; a++) {            // 内层：每轮比较到 i-1 位置
//             if (arr[a] > arr[a + 1]) {
//                 // 交换 arr[a] 和 arr[a+1]
//                 int temp = arr[a];
//                 arr[a] = arr[a + 1];
//                 arr[a + 1] = temp;
//             }
//         }
//     }
// }

// // 打印数组
// void printArray(int arr[], int len) {
//     for (int i = 0; i < len; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");   // 换行
// }

// int main() {
//     int arr[] = {1, 36, 24, 37, 46, 66, 54, 67, 87, 55, 22};
//     int len = sizeof(arr) / sizeof(arr[0]);

//     printf("排序前: ");
//     printArray(arr, len);

//     bubbleSort(arr, len);   // 直接调用，无需接住返回值

//     printf("排序后: ");
//     printArray(arr, len);

//     return 0;
// }
