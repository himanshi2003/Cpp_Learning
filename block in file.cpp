#include <iostream>
using namespace std;


void function(int num)
{
    num = num+5;
    {
        int num=5; 
        cout << "Num inside block(): " << num << endl;
    }
    cout << "Num inside function(): " << num << endl;
}


int main()
{
    int num = 15;
    // cout << "Num inside main(): " << num << endl;
    function(num);
    cout << "Num inside the main(): " << num << endl;
    return 0;
}
