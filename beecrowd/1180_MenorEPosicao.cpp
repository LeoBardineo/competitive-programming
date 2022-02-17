#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, valor, menor = 1001, pos = 0;
  vector<int> X;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> valor;
    X.push_back(valor);
  }

  for (int i = 1; i < N; i++) {
    if (menor > X[i]) {
      menor = X[i];
      pos = i;
    }
  }

  cout << "Menor valor: " << menor << "\n";
  cout << "Posicao: " << pos << "\n";
  return 0;
}
