#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, k;
    cin >> n;
    
    vector<int> buses(n);
    for(int i = 0; i < n; i++) {
        cin >> buses[i];
    }

    cin >> k; 
    while(k--) {
        string con;
        cin >> con;
                int NumDec = stoi(con, nullptr, 2);
        
        if(NumDec < n) {
            cout << buses[NumDec] << endl; 
        } else {
            cout << "No mi King ese bus no existe." << endl; 
        }
    }

    return 0;
}
