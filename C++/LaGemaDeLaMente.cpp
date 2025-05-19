#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void gemasEncontradas(int &n, int &gema, const vector<int> &gems){
    for (int i = 0; i < n; i++)
    {
        if (abs(gems[i]- gema) <=3)
        {
            cout << gems[i]<< " ";
        }
    }

    cout << "\n"; 
    
}

int main(){
    int n;
    cin >> n;

    vector<int> gemas(n);
    for (int i = 0; i < n; i++)
    {
        cin >> gemas[i];
    }

    int gema;
    cin >> gema;

    gemasEncontradas(n, gema, gemas);

    


    return 0;
}