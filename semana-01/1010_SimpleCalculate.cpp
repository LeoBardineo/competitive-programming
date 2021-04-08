#include <bits/stdc++.h>

using namespace std;

int main(){
    int cp1, np1, cp2, np2;
    float pp1, pp2;
    cin >> cp1 >> np1 >> pp1;
    cin >> cp2 >> np2 >> pp2;
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << np1 * pp1 + np2 * pp2 << "\n";
    return 0;
}