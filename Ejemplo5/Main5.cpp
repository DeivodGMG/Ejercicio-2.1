// FILL, SETFILL
#include <iostream>
using namespace std;
#include <iomanip>
int n = 0;
int main(){
cout << "Ingrese el numero de separacion mayor a 11\n";
cin >> n;
cout << setw(n) << setfill('*') << "Hola_Mundo\n";
    return 0;
}