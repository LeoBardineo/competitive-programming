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
  int N, M, num, casaAtual = 0, casaPraEntregar, tempo = 0;
  vector<int> casas, encomendas;
  cin >> N >> M;

  for (int i = 0; i < N; i++) {
    cin >> num;
    casas.push_back(num);
  }

  for (int i = 0; i < M; i++) {
    cin >> num;
    encomendas.push_back(num);
  }

  for (int i = 0; i < M; i++) {
    casaPraEntregar = buscabinaria(0, N, casas, encomendas[i]);
    tempo += abs(casaAtual - casaPraEntregar);
    casaAtual = casaPraEntregar;
  }

  cout << tempo << "\n";

  return 0;
}
