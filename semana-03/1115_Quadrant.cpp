#include <bits/stdc++.h>

using namespace std;

int main(){
  int X, Y, notNull = true;
  while (notNull) {
  cin >> X >> Y;
    if (X > 0 && Y > 0) {
      cout << "primeiro\n";
    }else if(X < 0 && Y > 0){
      cout << "segundo\n";
    }else if(X < 0 && Y < 0){
      cout << "terceiro\n";
    }else if(X > 0 && Y < 0){
      cout << "quarto\n";
    }else{
      notNull = false;
    }
  }
  return 0;
}