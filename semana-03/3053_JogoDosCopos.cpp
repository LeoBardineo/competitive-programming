#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, tipoMovimento;
  string posicaoAtual;
  cin >> N;
  cin >> posicaoAtual;
  for (int i = 0; i < N; i++){
    cin >> tipoMovimento;
    if (tipoMovimento == 1 && (posicaoAtual == "A" || posicaoAtual == "B")){
      (posicaoAtual == "A") ? posicaoAtual = "B" : posicaoAtual = "A";
    }else if(tipoMovimento == 2 && (posicaoAtual == "B" || posicaoAtual == "C")){
      (posicaoAtual == "B") ? posicaoAtual = "C" : posicaoAtual = "B";
    }else if(tipoMovimento == 3 && (posicaoAtual == "A" || posicaoAtual == "C")){
      (posicaoAtual == "C") ? posicaoAtual = "A" : posicaoAtual = "C";
    }    
  }  
  cout << posicaoAtual << "\n";
  return 0;
}