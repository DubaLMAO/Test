#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> list(n);

    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }

    sort(list.begin(), list.end());

    int num;
    cin >> num;

    //declaramos un vector para almacenar la nueva lsit
    vector<int> NewList;

    for (int value : list)
    {
        if (value %num != 0)
        {
            NewList.push_back(value); //se agregan los valores que no son multiplos
        }
    }
    

    if(NewList.empty()){
        cout << "Lista vacía" << endl;
    } else {
        for (int i = 0; i < NewList.size(); i++)
        {
            if (i > 0) cout << " ";
            cout << NewList[i];
        }
        cout << endl;
    }

    return 0;
}