#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is " << id << "this is employee number" << count << endl;
    }
    static void getcount(void){
        cout<<"the value of count is"<<count<<endl; 
    }
};
//count is the static data member of employee
int employee::count; //default value is zero
int main()
{
    employee siya;
    //siya.id=1;
    //siya.count=1;//can not do this as id and count are private

    siya.setdata();
    siya.getdata();

    employee::getcount();


    return 0;
}