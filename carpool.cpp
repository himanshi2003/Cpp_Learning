#include<iostream>
using namespace std;

void pool(float);
void pool(float totalc1){
    float people,cost,moneysaved;
cout<<"  \n now enter the no of people you want to carpool with  ";
cin>>people;
cost=totalc1/people;
moneysaved=totalc1-cost;
cout<<"\n cost will be  rs "<<cost;
cout<<"\n money you saved rs "<<moneysaved;

}

int main(){
float totalkms, cfk,park,toll, totalc;
cout<<"Total kms driven per day \n";
cin>>totalkms;
cout<<"Cost of fuel per km \n";
cin>>cfk;

cout<<"Parking fees per day \n";
cin>>park;
cout<<"Tolls per day \n";
cin>>toll;

totalc=(totalkms*cfk)+park+toll;
cout<<"\n cost of driving alone rs "<<totalc;

pool(totalc);
return 0;

}
