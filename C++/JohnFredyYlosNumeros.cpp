#include <bits/stdc++.h>
using namespace std;


int main(){

    int N;
    cin >> N;
    
    int producto;

    vector<int> Numbers(N);

    for (int i = 0; i < N; i++)
    {
        cin >> Numbers[i];
    }
    
    sort(Numbers.begin(), Numbers.end());

    producto = Numbers[N - 1] * Numbers[N - 2];
    
    cout << producto;


    return 0;
}