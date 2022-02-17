#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  int bombas[51];
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> bombas[i];
  }

  if(N == 1){
    cout << bombas[0] << "\n" ;
    return 0;
  }

  cout << bombas[0] + bombas[1] << "\n";
  for (int i = 1; i < N-1; i++){
    cout << bombas[i-1] + bombas[i] + bombas[i+1] << "\n";
  }
  cout << bombas[N-2] + bombas[N-1] << "\n";

  return 0;
}
