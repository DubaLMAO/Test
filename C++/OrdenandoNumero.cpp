#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C, D;

    cin >> A >> B >> C >> D;
    

    int arr[] = {A, B, C, D};

    sort(arr, arr + 4);
    

    for(int i = 0; i < 4; ++i) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
