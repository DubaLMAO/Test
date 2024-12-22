#include <iostream>
using namespace std;

int main(){

    int num1;
    int num2;

    int c; //se usa como contador para saber cuantos 7 hay
    cin >> num1 >> num2;

    if(num1 == 7){
    c++;
    }

    if(num2 == 7){
    c++;
    }

    cout << c << endl;


    return 0;
}