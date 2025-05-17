#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N;
    cin >> N;

    vector<int> nCalles(N);

    int ConNorteS = 0;
    int ConEstO = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> nCalles[i];
        
        if (nCalles[i] == 1)
        {
            ConNorteS++;
        } else{
            if (nCalles[i] == 2)
            {
                ConEstO++;
            }
            
        }
        
    }
    
    cout << ConNorteS << " " << ConEstO << endl;

    return 0;
}