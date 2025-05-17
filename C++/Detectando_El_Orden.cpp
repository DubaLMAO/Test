#include <iostream>
using namespace std;

int main() {
    int A;
    int B;
    int C;

    cin >> A; 
    cin >> B;
    cin >> C;

    if (A == B && B == C) {
        cout << "I";
    }
    else if (A <= B && B <= C) {
        cout << "C";
    }
    else if (A >= B && B >= C) {
        cout << "D";
    }
    else {
        cout << "X";
    }

    return 0;
}

