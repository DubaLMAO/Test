#include <iostream>
using namespace std;

int main(){

    int num;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "No es primo"<< endl;
        break;
    case 2:
    case 3:
    case 5:
    case 7: 
        cout << "Es primo" << endl; 
        break;
    case 4:
    case 6:
    case 8:
    case 9:
    case 10:
        cout << "No es primo" << endl;
    default:
        break;
    }


    return 0;
}