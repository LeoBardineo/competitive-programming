#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, somaLinha, somaColuna, somaAnterior = 0, numero;
  vector<vector<int>> quadrado;
  cin >> N;

  for (int i = 0; i < N; i++) {
    quadrado.push_back({});
    for (int j = 0; j < N; j++) {
      cin >> numero;
      quadrado[i].push_back(numero);
    }
  }

  if(N == 1){
    cout << -1 << "\n";
    return 0;
  }

  for (int i = 0; i < N; i++) {
    somaLinha = 0;
    for (int j = 0; j < N; j++) {
      somaLinha += quadrado[i][j];
    }

    if (somaLinha != somaAnterior && i != 0) {
      cout << -1 << "\n";
      return 0;
    }

    somaAnterior = somaLinha;
  }

  for (int i = 0; i < N; i++) {
    somaColuna = 0;
    for (int j = 0; j < N; j++) {
      somaColuna += quadrado[j][i];
    }

    if (somaColuna != somaAnterior) {
      cout << -1 << "\n";
      return 0;
    }

    somaAnterior = somaColuna;
  }

  cout << somaAnterior << "\n";

  return 0;
}
