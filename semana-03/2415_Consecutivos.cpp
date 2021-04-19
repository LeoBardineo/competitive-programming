#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, numSorteio, anterior = 0, counterConsecutivo = 0, counterMaior = 0;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> numSorteio;
    if(numSorteio == anterior){
      counterConsecutivo++;
    }else{
      counterConsecutivo = 1;
    }
    if(counterConsecutivo > counterMaior) counterMaior = counterConsecutivo;
    anterior = numSorteio;
  }
  cout << counterMaior << "\n";
  return 0;
}