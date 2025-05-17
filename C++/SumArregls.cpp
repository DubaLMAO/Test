#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N; // Dimension del arreglo
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int s; // numero a comparar
    cin >> s;


    // izquierda a derecha
    int sumTizq = 0;
    int contIzqu = 0;
    for (int i = 0; i < N; i++)
    {
        sumTizq += arr[i];
        contIzqu++;
        if (sumTizq >= s)
        {
            break;
        }
    }

    // derecha a izquierda
    int sumTdere = 0;
    int contDere = 0;
    for (int i = N - 1; i >= 0; i--) //N-1 hace que comienze de el ultimo elemento
    {
        sumTdere += arr[i];
        contDere++;
        if (sumTdere >= s)
        {
            break;
        }
        
    }
    

    cout << contIzqu << " " << contDere << endl;

    
    return 0;
}