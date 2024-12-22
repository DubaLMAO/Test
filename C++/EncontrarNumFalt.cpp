#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int vector[N - 1];
    int sum = 0;
    
    for(int i = 0; i < N - 1; ++i) {
        std::cin >> vector[i];
        sum += vector[i];
    }
    
    int SumT = N * (N + 1) / 2;
    
    int NumFalt = SumT - sum;
    
    cout << NumFalt << endl;
    
    return 0;
}
