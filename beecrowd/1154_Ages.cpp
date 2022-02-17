#include <bits/stdc++.h>

using namespace std;

int main(){
  int counter = 0, N = 0;
  double average;
  while (N >= 0){
    cin >> N;
    if(N >= 0){
      average += N;
      counter++;
    }
  }
  average /= counter;
  cout << fixed << setprecision(2) << average << "\n";
  return 0;
}