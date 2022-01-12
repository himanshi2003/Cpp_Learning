#include<iostream>
using namespace std;

int avg(int a, int b, int c)
{
   return int(a+b+c)/3;
}  

int main()
{

    int a, b, c;
    cout<<"enter value of a";
    cin>>a;
        cout<<"enter value of b";
    cin>>b;
        cout<<"enter value of a";
    cin>>c;
    cout << avg(a, b, c) << endl; 


    return 0;
}


