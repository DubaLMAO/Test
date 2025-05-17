#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int p;
    cin >> p;

    vector<int> puertas(p);
    for (int i = 0; i < p; i++)
    {
        cin >> puertas[i];
    }

    int k;
    cin >> k;

    vector<int> llaves(k);
    for (int i = 0; i < k; i++)
    {
        cin >> llaves[i];
    }
    
    for (int i = 0; i < k; i++)
    {
        bool encontrada = false;
        for (int j = 0; j < p; j++)
        {
            if (llaves[i] == puertas[j])
            {
                cout << j + 1 << " ";
                encontrada = true;
                break;
            }
            
        }

        if(!encontrada){
            cout << 0 << " ";
        }
        
        
    }

    return 0;
}