#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> Nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> Nums[i];
    }
    
    reverse(Nums.begin(), Nums.end());

    for(int &d : Nums)
    {
        cout << d << " ";
    }
    

    return 0;
}