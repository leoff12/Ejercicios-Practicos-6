/* Suma de los numeros naturales de 1 hasta n*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Ingrese un numero natural: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << sum << endl;
    return 0;
}
