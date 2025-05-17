#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<double> nums(10);
    double sum = 0;
    
    for (int i = 0; i < 10; i++)
    {
        cin >> nums[i];
        sum += nums[i];

    }
    
    double prom = sum / 10;

    cout << "El promedio es: " << fixed << setprecision(3) << prom << endl;
    return 0;
}