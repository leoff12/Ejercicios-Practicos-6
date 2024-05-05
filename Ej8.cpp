/* Producto punto de dos vectores */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, dotProduct = 0;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;
    vector<int> v1(n), v2(n);
    cout << "Ingrese los elementos del primer vector: ";
    for(int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    cout << "Ingrese los elementos del segundo vector: ";
    for(int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    for(int i = 0; i < n; i++) {
        dotProduct += v1[i] * v2[i];
    }
    cout << "El producto punto de los vectores es: " << dotProduct << endl;
    return 0;
}