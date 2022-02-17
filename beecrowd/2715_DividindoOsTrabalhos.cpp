#include <bits/stdc++.h>

using namespace std;

// int buscaBinaria(int esquerda, int direita, vector<int> lista, int numPraDescobrir) {
//   while (esquerda <= direita) {
//     int meio = esquerda + (direita - esquerda) / 2;

//     if (lista[meio] == numPraDescobrir) {
//       return meio;
//     }

//     if (lista[meio] < numPraDescobrir) {
//       esquerda = meio + 1;
//     } else {
//       direita = meio - 1;
//     }
//   }
//   return -1;
// }

int main() {
  long long int N, num, divisao, soma, somaMeio, pos, esquerda, divisaoOriginal;
  vector<int> valores;
  while (cin >> N) {
    soma = 0;
    somaMeio = 0;
    pos = -1;
    for (int i = 0; i < N; i++) {
      cin >> num;
      soma += num;
      // valores.push_back(num);
    }
    divisao = soma / 2;
    // divisaoOriginal = divisao;
    // while (pos == -1) {
    //   pos = buscaBinaria(0, N, valores, divisao);
    //   somaMeio += valores[pos];
    //   divisao--;
    // }
    // cout << (soma - somaMeio) - somaMeio << "\n";

    if ((soma - divisao) == divisao) {
      cout << 0 << "\n";
    } else {
      cout << 1 << "\n";
    }
  }

  return 0;
}
