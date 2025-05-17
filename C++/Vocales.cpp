#include <bits/stdc++.h>
using namespace std;


int main(){

    int N;
    string S;

    cin >> N >> S;

    map<char, int> ConteoVoca = {{'a', 0}, {'e', 0}, {'i', 0}, {'o', 0}, {'u', 0}};

    for (char c : S)
    {
        if(ConteoVoca.count(c)){
            ConteoVoca[c]++;
        }
    }

    for(auto vocal : ConteoVoca){
        cout << vocal.first << " : " << vocal.second << endl;
        
    }
    

    return 0;
}