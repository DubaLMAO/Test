#include <iostream>
using namespace std;


int main(){ 

    int num;
    int suma = 0;

    while (cin >> num)
    {   
        if (num < 0)    
        {
            break;
        }

        if(num >= 10 && num <= 100){
            suma += num;
        }
        
    }
    
    cout << suma << endl;

    return 0;
}