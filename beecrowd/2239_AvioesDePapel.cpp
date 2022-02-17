#include <bits/stdc++.h>

using namespace std;

int main(){
  int C, P, F;
  cin >> C >> P >> F;
  if(C * F > P){
    cout << "N\n";
  }else{
    cout << "S\n";
  }
  return 0;
}