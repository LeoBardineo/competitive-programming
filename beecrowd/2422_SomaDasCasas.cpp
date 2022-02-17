#include <bits/stdc++.h>

using namespace std;

int buscabinaria(int esquerda, int direita, vector<int> lista, int numPraDescobrir) {
  while (esquerda <= direita) {
    int meio = esquerda + (direita - esquerda) / 2;

    if (lista[meio] == numPraDescobrir) {
      return meio;
    }

    if (lista[meio] < numPraDescobrir) {
      esquerda = meio + 1;
    } else {
      direita = meio - 1;
    }
  }
  return -1;
}

int main() {
  int N, K, num, A, B, soma = 0;
  vector<int> Ci;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> num;
    Ci.push_back(num);
  }

  cin >> K;

  for (int i = 0; i < Ci.size(); i++) {
    A = Ci[i];
    B = K - A;
    soma = buscabinaria(0, N, Ci, B);
    if (soma != -1) {
      cout << A << " " << B << "\n";
      return 0;
    }
  }

  return 0;
}
