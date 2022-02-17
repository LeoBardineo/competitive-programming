#include <bits/stdc++.h>

using namespace std;

int valorGolpe(int ataque, int defesa, int bonus){
  return ((ataque + defesa) / 2) + bonus;
}

int main(){
  int T, valorDabriel, ataque, defesa, bonus, level, valorGuarte;
  cin >> T;
  for (int i = 0; i < T; i++){
    cin >> bonus;
    for (int i = 0; i < 2; i++){
      cin >> ataque >> defesa >> level;
      bonus = (level % 2) ? 0 : bonus;
      valorGuarte = valorGolpe(ataque, defesa, bonus);

      if(i % 2){

        if(valorDabriel > valorGuarte){
          cout << "Dabriel\n";
        }else if(valorDabriel == valorGuarte){
          cout << "Empate\n";
        }else{
          cout << "Guarte\n";
        }

      }else{
        valorDabriel = valorGuarte;
      }
    }

  }

  return 0;
}
