#include <iostream>
using namespace std;

void suma(int arr[], int n, int &Simpar, int &Spar){
    Simpar = 0;
    Spar = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] %2 == 0){
            Spar += arr[i];
        } else {
            Simpar += arr[i];
        }
    }
   
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int Simpar, Spar;
    suma(arr, n, Simpar, Spar);
    
    return 0;
}