//ANUCHRA DE CAMPO
#include <iostream>
using namespace std;
int n = 0;
int main(){
   cout << "** ESTADOS EN FORMATO DE FLUJO **\nIngrese un NUMERO\n" ;
   cin >> n;
cout << "- Indicador skipws: " << n << ios::skipws << endl;
cout << "- Indicador left: " << n << ios::left << endl;
cout << "- Indicador right: " << n << ios::right << endl;
cout << "- Indicador internal: " << n << ios::internal << endl;
    return 0;
}