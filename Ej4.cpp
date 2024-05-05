/* Promedio general de una sección de 10 estudiantes */
#include <iostream>
using namespace std;

int main() {
    int sum = 0, nota;
    for(int i = 1; i <= 10; i++) {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        sum += nota;
    }
    cout << "El promedio general de la sección es: " << sum / 10.0 << endl;
    return 0;
}
