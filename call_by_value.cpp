#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}
//call by reference using pointers
void swappointer(int *a, int *b){ //temp a b
    int temp = *a;        //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
        // return a;

}
//call by reference using c++refernce variables
// int & 

void swapreferencevar(int &a, int &b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}
int main(){
    int  a=4, b=5;
    //cout<<"the sum of 4 and 5 is"<<sum(a, b);
    cout<<"the value of a is"<<a<<"the value of b is"<<b<<endl;
    //swap(a , b);// This will not swap a and b
    //swappointer(&a , &b);// This will  swap a and b using pointer ref
    swapreferencevar(a , b);// This will  swap a and b using ref var
// swapReferenceVar(x, y) = 766;
    cout<<"the value of a is"<<a<<"the value of b is"<<b<<endl;






    return 0;
}