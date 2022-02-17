#include <bits/stdc++.h>

using namespace std;

int main(){
  int X, Y;
  double preco;
  cin >> X >> Y;
  if(X == 1){
    preco = 4.0;
  }else if(X == 2){
    preco = 4.5;
  }else if(X == 3){
    preco = 5.0;
  }else if(X == 4){
    preco = 2.0;
  }else if(X == 5){
    preco = 1.5;
  }
  cout << fixed << setprecision(2);
  cout << "Total: R$ " << preco * Y << "\n";
  return 0;
}