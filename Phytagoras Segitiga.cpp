#include <iostream>
#include <math.h>
using namespace std;

int main (){
  // Menghitung sisi miring segitiga dengan phytagoras
  float a = 8, t = 10, x;

  cout << "Nilai Alas = " << a << endl;
  cout << "Nilai Tinggi = " << t << endl;

  //rumus
  x = sqrt( pow(a,2) + pow(t,2) );
  cout << "Nilai Sisi Miring = " << x << endl;
  
  
  return 0;
}