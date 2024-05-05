/* Transposicion de una matriz */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Ingrese el número de filas de la matriz: ";
    cin >> n;
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> m;
    vector<vector<int>> mat(n, vector<int>(m)), transpose(m, vector<int>(n));
    cout << "Ingrese los elementos de la matriz: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            transpose[j][i] = mat[i][j];
        }
    }
    cout << "La transposición de la matriz es: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
