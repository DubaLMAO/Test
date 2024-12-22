#include <iostream>
#include <cmath> 
using namespace std;

int main(){
    int N;
    int sum = 0;
    cin >> N;
    int vec[N];

    for (int i = 0; i < N; ++i){
        cin >> vec[i];
    }


    for (int j = 0; j < N; ++j){
        if (vec[j] < 0){
            vec[j] = (vec[j])*(-1);
        }
        sum += vec[j];
    }

    cout << sum;

    return 0;
}
