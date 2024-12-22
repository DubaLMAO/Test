#include <iostream>
using namespace std;

int main(){
    int P;
    int R;
    cin >> P;

    int TReb = P * 8;

    for (int i = 0; i < 5; ++i)
    {
        cin >> R;
        TReb -= R;
    }
    
    if (TReb == 0){
        cout << "FH" << endl;
    } else { 
        cout << "FF" << endl;
    }
    

    return 0;
}