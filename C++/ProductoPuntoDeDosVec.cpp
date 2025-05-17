#include <iostream>
#include <vector>
using namespace std;

int main(){

    int T1;
    int res = 0;

    cin >> T1;

    int Vec1[T1];
    int Vec2[T1];

    for(int i = 0; i< T1; ++i){
    cin >> Vec1[i];
    }

    for (int j = 0; j < T1; ++j)
    {
        cin >> Vec2[j];
    }
    

    for (int k = 0; k < T1; ++k)
    {
        res += Vec1[k] * Vec2[k];
    }
    

    cout << res << endl;

    return 0;
}