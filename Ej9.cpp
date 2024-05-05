/* Multiplicacion de dos matrices */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, p;
    cout << "Ingrese el numero de filas de la primera matriz: ";
    cin >> n;
    cout << "Ingrese el numero de columnas de la primera matriz y filas de la segunda matriz: ";
    cin >> m;
    cout << "Ingrese el numero de columnas de la segunda matriz: ";
    cin >> p;
    vector<vector<int>> mat1(n, vector<int>(m)), mat2(m, vector<int>(p)), product(n, vector<int>(p));
    cout << "Ingrese los elementos de la primera matriz: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mat1[i][j];
        }
    }
    cout << "Ingrese los elementos de la segunda matriz: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            cin >> mat2[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            for(int k = 0; k < m; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout << "El producto de las matrices es: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
