#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, Num, diffAtual, diffAnterior, count = 0;
  vector<int> escadinha, escadinhaContada;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> Num;
    escadinha.push_back(Num);
  }

  if (N == 1 || N == 2) {
    cout << 1 << "\n";
    return 0;
  }

  diffAnterior = escadinha[1] - escadinha[0];
  escadinhaContada.push_back(2);

  for (int i = 1; i < N; i++) {
    diffAtual = escadinha[i] - escadinha[i - 1];
    if (diffAtual == diffAnterior) {
      escadinhaContada[count]++;
    } else {
      count++;
      escadinhaContada.push_back(1);
    }
    diffAnterior = escadinha[i] - escadinha[i - 1];
  }

  cout << ++count << "\n";

  return 0;
}
