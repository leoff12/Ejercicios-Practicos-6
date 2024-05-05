/* Suma de dos vectores de igual longitud */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;
    vector<int> v1(n), v2(n), sum(n);
    cout << "Ingrese los elementos del primer vector: ";
    for(int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    cout << "Ingrese los elementos del segundo vector: ";
    for(int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    for(int i = 0; i < n; i++) {
        sum[i] = v1[i] + v2[i];
    }
    cout << "La suma de los vectores es: ";
    for(int i = 0; i < n; i++) {
        cout << sum[i] << " ";
    }
    cout << endl;
    return 0;
}
