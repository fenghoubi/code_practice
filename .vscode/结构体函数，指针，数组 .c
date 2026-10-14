// #include<stdio.h>
// #include<string.h>
// typedef struct studentName
// {
//     char name[100];
//     int age;//结构体内部有声明无数据
//     double len;
//     double weight;
// }S;//起别名
// // void change(S stu1)//无法将函数内修改结果传递回main函数，
// // {//需要用指针修改
// //     char name1[100];
// //     int age1;
// //     scanf("修改后名字年龄分别为%s,%d",name1,&age1);
// //     strcpy(stu1.name,name1);
// //     int* p = &age1;
// //     stu1.age = *p;
// // }
// void change(S* stu1)//无法将函数内修改结果传递回main函数，
// {//需要用指针修改，*stu1.记录main函数中结构体内存地址
//    printf("将学生姓名年龄修改为\n");
//     scanf("%s,%d",(*stu1).name,&((*stu1).age));
//     //无需新增加变量，通过修改*stu1实现
// }//利用scanf修改，输入内容必须 与内部结构完全相同
// int main()
// {
//     S s1;
//     strcpy(s1.name,"万叶");
//     s1.age = 16;
//     s1.age = 15;
//     s1.len = 158.2;
//     s1.weight = 47.6;
//     strcpy(s1.name,"万叶");
//     printf("%s\n",s1.name);
//     S arr[2] = {{"温迪",3000,1.57,43.7},{"散兵",500,1.61,51}};
//     printf("%s\n",arr[1]);//利用数组声明多个
//     for(int i = 0;i<2;i++)//利用临时变量遍历数组
//     {//*stu1.记录main函数中结构体内存地址
//         S temp =arr[i];
//         printf("学生姓名为%s\n",temp.name);
//     }
//         printf("学生姓名为%s\n",arr[0].name);
//         change(&arr[0]);//需传递结构体的地址，不是数组，用&
//         printf("修改后学生姓名为%s,年龄为%d\n",arr[0].name,arr[0].age);
//        return 0; 
// }