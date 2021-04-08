#include <bits/stdc++.h>

using namespace std;

int main(){
  int P1, C1, P2, C2, esquerdo, direito;
  cin >> P1 >> C1 >> P2 >> C2;
  esquerdo = P1 * C1;
  direito = P2 * C2;
  if(esquerdo == direito){
    cout << "0\n";
  }else if(esquerdo > direito){
    cout << "-1\n";
  }else if(direito > esquerdo){
    cout << "1\n";
  }
  return 0;
}