#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, G;
  double P, atual, menor = 1000000000, anterior = 0, valor;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> P;
    cin >> G;
    double preco = (P * 1000) / G;
    if(preco < menor){
      menor = preco;
    }
  }
  cout << fixed << setprecision(2);
  cout << menor << "\n";
  return 0;
}