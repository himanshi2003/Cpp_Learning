#include <iostream>
using namespace std;
class Dummy {
  public:
    static int n;
    Dummy () { n++; cout << n << endl;};
};
int Dummy::n = 1;
int main () {
  Dummy d1;
  cout << "Dummy1" << "\t" << d1.n << endl;
  Dummy d2;
  cout << "Dummy2" << "\t" << d2.n << endl;
  Dummy d3;
  cout << "Dummy3" << "\t" << d3.n << endl;
  cout << "Dummy1" << "\t" << d1.n << endl;
  cout << "Dummy2" << "\t" << d2.n << endl;
  cout << "Dummy3" << "\t" << d3.n << endl;
}