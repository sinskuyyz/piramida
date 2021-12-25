#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Piramida Bintang <<endl;
  cout << "=============================================" << endl;
  cout << endl;
 
  int tinggi_segitiga,i,j,k;
 
  cout << "Input tinggi segitiga: ";
  cin >> tinggi_segitiga;
 
  cout << endl;
 
  for(i=0; i<tinggi_segitiga; i++) {
 
    for(j=1; j<=i; j++) {
      cout << " ";
    }
 
    for(k=1; k<=tinggi_segitiga-i; k++) {
      cout << " *";
    }
    cout << endl;
  }
 
  return 0;
}
