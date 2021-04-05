#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, cem, cinquenta, vinte, dez, cinco, dois, um;
    cin >> N;
    cem = N / 100;
    cinquenta = (N % 100) / 50;
    vinte = (N % 100 % 50) / 20;
    dez = (N % 100 % 50 % 20) / 10;
    cinco = (N % 100 % 50 % 20 % 10) / 5;
    dois = (N % 100 % 50 % 20 % 10 % 5) / 2;
    um = (N % 100 % 50 % 20 % 10 % 5 % 2);
    cout << N << "\n";
    cout << cem << " nota(s) de R$ 100,00\n";
    cout << cinquenta << " nota(s) de R$ 50,00\n";
    cout << vinte << " nota(s) de R$ 20,00\n";
    cout << dez << " nota(s) de R$ 10,00\n";
    cout << cinco << " nota(s) de R$ 5,00\n";
    cout << dois << " nota(s) de R$ 2,00\n";
    cout << um << " nota(s) de R$ 1,00\n";
    return 0;
}