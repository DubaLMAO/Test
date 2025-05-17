#include <bits/stdc++.h>
using namespace std;

int busquedaBinaria(vector<int>& datos, int n, int k) {
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = (s + e) / 2;

        if (datos[mid] == k) {
            return mid;
        } else if (datos[mid] > k) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return -1;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> datos(n);

    for (int i = 0; i < n; i++) {
        cin >> datos[i];
    }

    int k = datos[0];
    sort(datos.begin(), datos.end());
    cout << busquedaBinaria(datos, n, k);

    return 0;
}