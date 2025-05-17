#include <iostream>
using namespace std;

int main(){

    int A;
    int B;
    int res;

    cin >> A;
    cin >> B;

    int sm = A + B;
    if (sm == 5){
        B += 3;
        res = 2 * A + B;
        cout << res << endl;
        return 0; //Hace que el programa termine ahi
    } else {
        A -= 1;
        res = 7 * A + B;
        } if (res % 2 == 0){
            res = A - B;
            cout << res << endl;
                } else{
                res = A * B;
                cout << res << endl;
                }

    return 0;
}