#include<iostream>
using namespace std;
int main () {

 int a=20, b=30, temp;
 cout << "NILAI AWAL : A = " << a << " B = " << b << endl;

  temp = a;
  a = b;
  b = temp;
  cout << "NILAI SETELAH DI TUKAR : A = " << a << " B = " << b << endl;
  cout << endl;

  cout << "NILAI AWAL : A = " << a << " B = " << b << endl;
  a = a+b;
  b = a-b;
  a = a-b;
  cout << "NILAI SETELAH DITUKAR : A = " << a << " B = " << b << endl;

return 0;

}

