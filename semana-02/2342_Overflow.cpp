#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, P, Q, resultado;
  char C;
  string texto;
  cin >> N >> P >> C >> Q;
  resultado = (C == '+') ? P + Q : P * Q;
  texto = (resultado <= N) ? "OK" : "OVERFLOW";
  cout << texto << "\n";
  return 0;
}