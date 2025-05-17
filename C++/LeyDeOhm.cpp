#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    
    char c;
    cin >> c;

    double V;
    double R;
    double I;

    if (c == 'V')
    {
        cin >> I;
        cin >> R;
        V = I * R;
        cout << fixed << setprecision(4) << V;
    } 



    if (c == 'I')
    {
        cin >> V;
        cin >> R;
        I = V/R;
        cout << fixed << setprecision(4)<< I;
    }
    
    
    
    if (c == 'R')
    {
        cin >> V;
        cin >> I;
        R = V/I;
        cout << fixed << setprecision(4) << R;
    }
    


    return 0;
}