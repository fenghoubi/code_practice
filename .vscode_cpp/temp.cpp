// #include<iostream>
// #include<string>
// #include<limits>
// int main()
// {
//     using namespace std;
//     int n =0;
//     cin>>n;
//     cin.ignore(numeric_limits<streamsize>::max(),'\n');
//     string secret;
//     getline(cin,secret);
//     for(size_t i = 0;i<secret.length();i++)
//     {
//         secret[i] = (secret[i] - 'a'+n)%26+'a';
//     }
//     cout<<secret;
//     return 0;
// }