#include <iostream>
#include <vector>
using namespace std;

bool defListaOrde(const vector<int> &Nums){
    for (int i = 0; i < Nums.size() - 1; i++)
    {
        if (Nums[i] >= Nums[i+1])
        {
            return false;
        }
    }
    return true;
}


int main(){ 
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; 
    }
    
    if (defListaOrde(arr))
    {
        cout << "Sí";
    } else {
        cout << "No";
    }
    

    return 0;
}
