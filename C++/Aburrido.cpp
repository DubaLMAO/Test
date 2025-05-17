#include <iostream>
using namespace std;

int main(){

int Nums[3];

for(int i = 0; i < 3; ++i){
cin >> Nums[i];
}


for (int j = 0; j < 3; ++j)
{
    int res = Nums[j] * 7;
    cout << res << endl;
}

    return 0;
}