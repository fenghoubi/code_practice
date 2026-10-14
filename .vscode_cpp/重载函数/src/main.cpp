#include<iostream>
#include"time0.h"
#include<iterator>
int main()
{
    using namespace std;
    int arr[] = {1,2,3,4,5,6};
    int arr0[]= {1,2,3,4};
    Time t1;
    Time t2(1,20,size(arr),arr);
    Time t4(3,61,size(arr0),arr0);
    Time t3(t2);
    t2 = t4;
    Time t0 = t2 +t3;
    cout<<t0;
    return 0;

}