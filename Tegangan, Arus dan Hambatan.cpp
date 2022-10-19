#include <iostream>
using namespace std;

//Menghitung arus, tegangan, dan hambatan
int main (){
  float v, i, r;

  cout << "Menghitung Tegangan (V)" << endl;
  //Menghitung tegangan
  cout << "Masukkan I = ";
  cin >> i;
  cout << "Masukkan R = ";
  cin >> r;

  //rumus
  v = i * r;
  cout << "Nilai V = " << v << endl;
  
  cout << "Menghitung Arus (I)" << endl;
  //Menghitung arus
  cout << "Masukkan V = ";
  cin >> v;
  cout << "Masukkan R = ";
  cin >> r;

  //rumus
  i = v/r;
  cout << "Nilai I = " << i << endl;
  
  cout << "Menghitung Hambatan (R)" << endl;
  //Menghitung hambatan
  cout << "Masukkan V = ";
  cin >> v;
  cout << "Masukkan I = ";
  cin >> i;

  //rumus
  r = v/i;
  cout << "Nilai R = " << r << endl;

  
  return 0;
}

