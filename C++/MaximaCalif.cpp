#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> Nums(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> Nums[i];
    }
    
    sort(Nums.begin(), Nums.end(), greater<int>());

    cout << Nums[0];
    return 0;
}