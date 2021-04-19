#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, L, C, counter = 0;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> L;
    cin >> C;
    if(L > C) counter += C;
  }
  cout << counter << "\n";
  return 0;
}