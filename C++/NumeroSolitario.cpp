#include <bits/stdc++.h>
using namespace std;

// Este metodo compara
//0101 ^ 0011 = 0110
int busquedaXor(vector<int> Nums){
    int result = 0;
    for (int num : Nums)
    {
        result ^= num;
    }

    return result;
    
}

int main(){

    int num;
    cin >> num;
    vector<int> nums(num);
    for (int i = 0; i < num; i++)
    {
        cin >> nums[i];
    }

    cout << busquedaXor(nums) << endl;

    return 0;
}