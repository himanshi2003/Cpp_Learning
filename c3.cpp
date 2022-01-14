#include <iostream>
using namespace std;
void arraysss(int arr[])
{
    int x = sizeof(arr) / sizeof(arr[0]);
    cout << "size will be " << x;
}
int main()
{
    int arr[] = {3, 2434, 343, 23, 121, 12, 1};
    arraysss(arr);
}