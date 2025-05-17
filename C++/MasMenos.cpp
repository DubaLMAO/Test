#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float A;
    float B;
    float C;
    float x, y;

    cin >> A;
    cin >> B; 
    cin >> C;


    x = A/B + C;
    y = A/B - C;

    if(B==0 && x != y){
    cout << fixed << setprecision(6) << x << endl;
    cout << fixed << setprecision(6) << y << endl;
    } else if(x == y && B !=0){
            cout << fixed << setprecision(6) << x << endl;
        } else {
            cout << "indefinido" << endl;
    }
    


    return 0;
}