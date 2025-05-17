#include <iostream>
using namespace std;

int main() {
    int L;
    cin >> L; 

    if (L <= 3) {
        cout << "BEBE" << endl;
    }

    if (L >= 4 && L <= 14) {
        cout << "NINO" << endl;  
    }

    if (L >= 15 && L <= 18) {
        cout << "JOVEN" << endl;  
    }

    if (L >= 19 && L <= 65) {
        cout << "ADULTO" << endl;  
    } 
        
    if (L >= 66) {
        cout << "ADULTO 3RA" << endl;  
    }     

    return 0;
}

