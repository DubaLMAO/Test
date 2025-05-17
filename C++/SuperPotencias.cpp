#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int base = pow(b, c);

    int result = pow(a, base);

    cout << result << endl;

    return 0;
}