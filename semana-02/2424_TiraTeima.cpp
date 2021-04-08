#include <bits/stdc++.h>

using namespace std;

int main(){
  int X, Y;
  cin >> X >> Y;
  if(X < 0 || X > 432 || Y < 0 || Y > 468){
    cout << "fora\n";
  }else{
    cout << "dentro\n";
  }
  return 0;
}