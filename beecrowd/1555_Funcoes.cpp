#include <bits/stdc++.h>

using namespace std;

int r(int x, int y){
  return ((3 * x) * (3 * x))  + (y * y);
}

int b(int x, int y){
  return 2 * (x * x) + ((5 * y) * (5 * y));
}

int c(int x, int y){
  return - 100 * x + y * y * y;
}

int main(){
  int N, x, y, rafa, beto, carlos;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> x >> y;
    rafa = r(x, y);
    beto = b(x, y);
    carlos = c(x, y);

    if(rafa > beto and rafa > carlos){
      cout << "Rafael ganhou\n";
    }

    if(beto > rafa and beto > carlos){
      cout << "Beto ganhou\n";
    }

    if(carlos > rafa and carlos > beto){
      cout << "Carlos ganhou\n";
    }
  }

  return 0;
}
