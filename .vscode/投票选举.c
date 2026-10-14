#include<stdio.h>
#include<time.h>
#include<stdlib.h>
typedef struct spot
{
    char name[100];
    int count;
}M;
int main()
{
    M arr[4] ={{"A",0},{"B",0},{"C",0},{"D",0},};
    srand(time(NULL));
    for(int i =0;i<80;i++){
    int num = (rand()%80+1)%4;
    switch(num)
    {
        case 0:arr[0].count++;
        break;
        case 1:arr[1].count++;
        break;
        case 2:arr[2].count++;
        break;
        case 3:arr[3].count++;
        break;
        default:break;
    }}
    int max = arr[0].count;
    for(int i = 0;i<4;i++)
    {
        if(max<=arr[i].count)
        {
            max = arr[i].count;
        } 
    }
    for(int i = 0;i<4;i++)
    {
        printf("景点%s 所得票数为%d\n",arr[i].name,arr[i].count);
    }
    for(int i = 0;i<4;i++)
    {
        if(arr[i].count == max)
        {
            printf("景点%s 所得票数为%d,为第一",arr[i].name,arr[i].count);
            break;
        }
    }
    return 0;
}