#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, entrada, soma, metade, anterior = 0;
  vector<int> comprimentos, somas;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> entrada;
    comprimentos.push_back(entrada);
    soma = entrada + anterior;
    somas.push_back(soma);
    anterior = somas[i];
  }
  metade = somas[N-1] / 2;
  for(int i = 0; i < N; i++){
    if(somas[i] == metade){
      cout << i + 1 << "\n";
      return 0;
    }
  }
  return 0;
}
