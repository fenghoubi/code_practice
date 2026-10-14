#include<stdio.h>
void math(int*sum,float*index)
{
    int num[10];
    for(int i = 0;i<=9;i++)
    {
        scanf("%d",&num[i]);
        printf("%d ",num[i]);
    }
    printf("\n");
    for(int i = 0;i<10;i++)
    {
        *sum = *sum +num[i]; }
    *index = (float)*sum/10;
}
int main()
{
    printf("请输入十项数据\n");
    int sum = 0;
    float index = 0;
    math(&sum,&index);
    printf("总和为%d,平均数为%.2f",sum,index);
    return 0;
}