#include <iostream>
#include <string>
using namespace std;


int defKi(string k1, string k2){
    k1.length();
    k2.length();
    int res = k1.length() + k2.length();

    return res;

}

int main(){

    string k1, k2;
    cin >> k1;
    cin >> k2;
    int res = defKi(k1, k2);
    cout << res << endl;


    return 0;
}