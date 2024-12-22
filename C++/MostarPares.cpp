#include <iostream>
using namespace std;

int main() {
    
    int N;
    cin >> N;

    int nums[N];

    for (int i = 0; i < N; ++i){
        cin >> nums[i];
    }
    
    for (int i = 0; i < N; ++i){
        if(nums[i] %2 == 0){
            cout << nums[i]<< endl;
        }
    }
    

    return 0;
}
