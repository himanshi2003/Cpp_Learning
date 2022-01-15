#include<iostream>
using namespace std;
//function prototype
//type function name (arguments);
//int sum(int a, int b);------>accepteble
//int sum(int a, b);------>not accep
int sum(int,int);

int main(){
    int num1, num2;
    cout<<"enter first num"<<endl;
    cin>>num1;
    cout<<"enter second num"<<endl;
    cin>>num2;
    cout<<"the sum is"<<sum(num1 ,num2);

//num1 and num2 are actual parameters

    return 0;
}
int sum(int a, int b){
    // formal parameters a and b are taking values from actaual parameters num1 and num2
    int c= a+b;
    return c;
}