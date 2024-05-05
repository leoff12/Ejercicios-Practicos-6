/*Cantidad de alumnos aprobados, reprobados y promedio general de un grupo de 8 estudiantes*/
#include <iostream>
using namespace std;

int main() {
    int nota, aprobado = 0, reprobado = 0, sum = 0;
    for(int i = 1; i <= 8; i++) {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        sum += nota;
        if(nota >= 70) {
            aprobado++;
        } else {
            reprobado++;
        }
    }
    cout << "Cantidad de alumnos aprobados: " << aprobado << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobado << endl;
    cout << "Promedio general del grupo: " << sum / 8.0 << endl;
    return 0;
}
