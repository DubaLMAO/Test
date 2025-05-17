#include <iostream>
#include <vector>
using namespace std;

void numAstronautas(int n, vector<int> &array) {
    for (int i = n - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> array(n);

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    numAstronautas(n, array);
    return 0;
}