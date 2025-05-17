#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;
    
    while (true) {
        cin >> N; 
        if (N == 0) {
            break; 
        } 
        sum += N; 
    }

    cout << sum << endl; 
    
    return 0;
}
