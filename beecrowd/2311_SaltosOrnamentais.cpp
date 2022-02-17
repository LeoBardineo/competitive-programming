#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, maiorI, menorI;
  double notas[7], nota, maior, menor, grauDificuldade, resultado = 0.0;
  string nome;

  cout << fixed << setprecision(2);

  cin >> N;

  for (int i = 0; i < N; i++){
    cin >> nome;
    cin >> grauDificuldade;

    for (int j = 0; j < 7; j++){
      cin >> nota;
      notas[j] = nota;
    }

    maior = 0;
    menor = 11;
    maiorI = 0;
    menorI = 0;
    resultado = 0;

    for (int j = 0; j < 7; j++){
      if(notas[j] > maior){
        maior = notas[j];
        maiorI = j;
      }

      if(notas[j] < menor){
        menor = notas[j];
        menorI = j;
      }
    }

    notas[maiorI] = 0;
    notas[menorI] = 0;

    for (int j = 0; j < 7; j++){
      resultado += notas[j];
    }

    resultado *= grauDificuldade;

    cout << nome << " " << resultado << "\n";
  }

  return 0;
}
