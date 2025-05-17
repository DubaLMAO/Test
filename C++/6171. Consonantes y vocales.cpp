#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;

    cin >> s;

    int C = 0;
    int v = 0;

    for(char c : s){
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O'|| c == 'U'){
            v++;
        } else {
            C++;
        }
    } 


    cout << C << " " << v << endl;
    return 0;

}
