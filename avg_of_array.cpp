#include <iostream>
using namespace std;
int main()
{
    int array[] = {123, 43, 231, 3, 212};
    int sum = 0, size = sizeof(array) / sizeof(array[0]);
    for (int x = 0; x < size; x++)
    {
        sum = sum + array[x];
    }
    cout << "avg of array will be " << sum/size;
}
