
// #include<stdio.h>//有问题的代码

// int main()
// {
//     double num = 0.1;
//     int i = 0;
//     printf("要用多少次？");
//     while(num<=8844.33)
//     {
//         num = num*2;//计算有问题实际次数为17
//         if(num <= 8844.33)//最后一次不会计算在内
//         {                //此时num>8844.33,if不成立
//             i++;//去除if结构，改为直接写i++，if重复赘余

//         }
//     }
//     printf ("所用次数为%d\n",i);
//     return 0;
    
// }