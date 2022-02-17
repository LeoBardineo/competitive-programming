#include <bits/stdc++.h>

using namespace std;

int main() {
  map<int, int> appsInstalados;
  map<int, int> appInstalar;
  int C, N; // total de programas instalados na empresa / total de aplicativos e versões
  int Pc, Vc; // número do programa / número da versão instalada no computador
  int Pn, Vn; // número do programa / número da versão disponível na internet
  cin >> C;
  cin >> N;

  for (int i = 0; i < C; i++){
    cin >> Pc >> Vc;
    appsInstalados.insert({Pc, Vc});
  }

  for (int i = 0; i < N; i++){
    cin >> Pn >> Vn;
    if(appsInstalados.find(Pn) != appsInstalados.end()){
      if(appsInstalados[Pn] < Vn){
        appInstalar.insert({Pn, Vn});
      }
    }else{
        appInstalar.insert({Pn, Vn});
    }
  }

  for (pair<int, int> app:appInstalar){
    cout << app.first << " " << app.second << "\n";
  }

  return 0;
}
