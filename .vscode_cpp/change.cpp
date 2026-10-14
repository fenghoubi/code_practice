// #include<iostream>
// #include"first_practice.h"
// #include<cmath>
// #include<cstdio>
// int main()
// {
//     using namespace std;
//     rect n1{12,15};
//     polar n2;
//     exchange(n2,n1);
//     printf("%.2f,%.2f",n2.dis,n2.ang);
//     return 0;
// }
// void exchange(polar& n2,rect& n1)
// {
//     float distance = sqrt(n1.x*n1.x+n1.y*n1.y);
//     n2.dis = distance;
//     float angle = atan2(n1.y,n1.x);
//     n2.ang = angle*180/PI;
// }