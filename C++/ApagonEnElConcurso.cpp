#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p1, t1; //Daniel
    int p2, t2; //Mabel

    cin >> p1 >> t1;
    cin >> p2 >> t2;

    if (p1 > p2 || (p1 == p2 && t1 < t2)) {
        cout << "DANIEL";
    } else if (p2 > p1 || (p1 == p2 && t2 < t1)) {
        cout << "MABEL";
    } else {
        cout << "EMPATE";
    }

    return 0;
}
