//ANUCHRA DE CAMPO
#include <iostream>
using namespace std;
int n = 0;
int main(){
   cout << "** FUNCIONES WIDTH **\nIngrese una anchura\n" ;
   cin >> n;
   cout.width(n);
   cout << "Hola mundo " ;
   
    return 0;
}