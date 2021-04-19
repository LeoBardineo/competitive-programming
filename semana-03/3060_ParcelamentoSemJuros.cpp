#include <bits/stdc++.h>

using namespace std;

int main(){
  int V, P, parcelasMaiores, valorParcela;
  cin >> V >> P;
  parcelasMaiores = V % P;
  for (int i = 1; i <= P; i++){
    if(i <= parcelasMaiores){
      valorParcela = (V / P) + 1;
      cout << valorParcela << "\n";
    }else{
      cout << V / P << "\n";
    }
  }
  return 0;
}