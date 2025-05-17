#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N;
    cin >> N;

    int sum = 0;

    vector<vector<int>> matriz(N, vector<int>(N));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; i < N; j++)
        {
            cin >> matriz[i][j];
            sum += i + j;
            cout << sum << endl;
        }
        
    }



    



    return 0;   
}