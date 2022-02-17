#include <bits/stdc++.h>

using namespace std;

int main(){
    int ageDays, y, m, d;
    cin >> ageDays;
    y = ageDays / 365;
    m = (ageDays % 365) / 30;
    d = ageDays % 365 % 30;
    cout << y << " ano(s)\n";
    cout << m << " mes(es)\n";
    cout << d << " dia(s)\n";
    return 0;
}