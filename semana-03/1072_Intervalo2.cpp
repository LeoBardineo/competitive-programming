#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, X, counter = 0;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> X;
    if(X >= 10 && X <= 20){
      counter++;
    }
  }
  cout << counter << " in\n";
  cout << N - counter << " out\n";
  return 0;
}