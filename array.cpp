#include <iostream>
using namespace std ;
int main(){
// example of arrays
int marks[] ={23, 34, 44, 55};
int mathsmarks[4];
mathsmarks[0]=345;
mathsmarks[1]=689;
mathsmarks[2]=890;
mathsmarks[3]=987;
 //you can change the value of array
 cout<<"these are mathsmarks"<<endl;
cout<<mathsmarks[0]<<endl;
cout<<mathsmarks[1]<<endl;
cout<<mathsmarks[2]<<endl;
cout<<mathsmarks[3]<<endl;
cout<<"these are marks"<<endl;
//cout<<marks[0]<<endl;
//cout<<marks[1]<<endl;
//cout<<marks[2]<<endl;
//cout<<marks[3]<<endl;
  

  //array using lopps
  
for (int i = 0; i <4 ; i++)
{
  cout<<"these are marks "<<i<<" is "<< marks[i]<<endl;

}

//pointers and arrays
int*p= marks;
cout<<"the value of *p is "<<*p<<endl;
cout<<"the value of *p+1 is "<<*p+1<<endl;
cout<<"the value of *p+2 is "<<*p+2<<endl;
cout<<"the value of *p+3 is "<<*p+3<<endl;




    return 0;

}