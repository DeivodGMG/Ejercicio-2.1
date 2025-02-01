// ALINEACION
#include <iostream>
using namespace std;
#include <iomanip>
int n = 0;
int main(){
cout << "Ingrese un numero\n";
cin >> n;
for (int i = 1; i <= n; i++)
{
    cout << setw(2) << n << " X " << setw(2) << i << " = " << setw(2) << n * i << endl;
}

    return 0;
}