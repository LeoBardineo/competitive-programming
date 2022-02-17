#include <bits/stdc++.h>

using namespace std;

int main(){
  int X, Y, Z, maior, meio, menor;
  cin >> X >> Y >> Z;
  if(X > Y && X > Z){
    maior = X;
    if(Y > Z){
      meio = Y;
      menor = Z;
    }else{
      meio = Z;
      menor = Y;
    }
  }else if(Y > Z){
    maior = Y;
    if(X > Z){
      meio = X;
      menor = Z;
    }else{
      meio = Z;
      menor = X;
    }
  }else{
    maior = Z;
    if(X > Y){
      meio = X;
      menor = Y;
    }else{
      meio = Y;
      menor = X;
    }
  }

  cout << menor << "\n";
  cout << meio << "\n";
  cout << maior << "\n";
  cout << "\n";
  cout << X << "\n";
  cout << Y << "\n";
  cout << Z << "\n";

  return 0;
}