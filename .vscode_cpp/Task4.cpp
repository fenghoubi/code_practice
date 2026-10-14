// #include<iostream>
// using namespace std;
// void analyze(const int*arr,int n,int*maxVal,int*minVal,double *avg);
// int main()
// {
//     int num =0;
//     cin>>num;
//     int* arr = new int[num];
//     for(int i = 0;i<num;i++)
//     cin>>arr[i];
//     int maxVal = 0;
//     int minVal = 0;
//     double avg = 0.0;
//     analyze(arr,num,&maxVal,&minVal,&avg);
//     cout<<"max="<<maxVal
//     <<",min="<<minVal
//     <<",avg="<<avg<<"\n";
//     delete arr;
//     return 0;
// }
// void analyze(const int*arr,int n,int*maxVal,int*minVal,double*avg)
// {
//     int sum = 0;
//     *minVal = arr[0];
//     for(int i =  0;i<n;i++)
//     {
//         if(arr[i]>*maxVal)
//             *maxVal = arr[i];
//         if(arr[i]<*minVal)
//         *minVal = arr[i];
//         sum += arr[i];
//     }
//     *avg = (double)sum/n;
// }