#include <iostream>
using namespace std;

int main (){
  //Menghitung nilai akhir matkul Algoritma dan Pemrograman
  int Praktikum = 75, UTS = 70, UAS = 88;
  float R;

  cout << "Nilai Praktikum = " << Praktikum << endl;
  cout << "Nilai UTS = " << UTS << endl;
  cout << "Nilai UAS = " << UAS << endl;
  //rumus
  R = (0.2 * Praktikum) + (0.3 * UTS) + (0.5 * UAS);
  cout << "Nilai Akhir Matkul = " << R << endl;


  return 0;
}