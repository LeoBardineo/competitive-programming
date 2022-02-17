#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, alcool = 0, gasolina = 0, diesel = 0, endLoop = false;
  while (!endLoop) {
    cin >> N;
    switch (N){
    case 1:
      alcool++;
      break;

    case 2:
      gasolina++;
      break;
    
    case 3:
      diesel++;
      break;

    case 4:
      endLoop = true;
      break;

    default:
      break;
    }
  }
  cout << "MUITO OBRIGADO\n";
  cout << "Alcool: " << alcool << "\n";
  cout << "Gasolina: " << gasolina << "\n";
  cout << "Diesel: " << diesel << "\n";
  return 0;
}