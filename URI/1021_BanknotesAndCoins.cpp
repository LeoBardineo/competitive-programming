#include <bits/stdc++.h>

using namespace std;

// Ced = Cédula, Cent = Centavo
int main(){
    int NInteiro, cemCed, cinquentaCed, vinteCed, dezCed, cincoCed, doisCed;
    int umMoeda, cinquentaCent, vinteCincoCent, dezCent, cincoCent, umCent;
    double N, centavos;

    cin >> N;

    cemCed = N / 100;
    cinquentaCed = fmod(N, 100) / 50;
    vinteCed = fmod(fmod(N, 100), 50) / 20;
    dezCed = fmod(fmod(fmod(N, 100), 50), 20) / 10;
    cincoCed = fmod(fmod(fmod(fmod(N, 100), 50), 20), 10) / 5;
    doisCed = fmod(fmod(fmod(fmod(fmod(N, 100), 50), 20), 10), 5) / 2;

    cout << "NOTAS:\n";
    cout << cemCed << " nota(s) de R$ 100.00\n";
    cout << cinquentaCed << " nota(s) de R$ 50.00\n";
    cout << vinteCed << " nota(s) de R$ 20.00\n";
    cout << dezCed << " nota(s) de R$ 10.00\n";
    cout << cincoCed << " nota(s) de R$ 5.00\n";
    cout << doisCed << " nota(s) de R$ 2.00\n";

    NInteiro = N;
    centavos = N - NInteiro;
    centavos *= 100;
    /* um adendo:
    em float o centavos não dá exato e isso causa em erro na aplicação,
    em double dá exato,
    exemplo: 576.73
    em float: centavos == 72.998 (faltou uma moeda de um centavo)
    em double: centavos == 73
    use double!
    */
    
    umMoeda = fmod(fmod(fmod(fmod(fmod(fmod(N, 100), 50), 20), 10), 5), 2);
    cinquentaCent = centavos / 50;
    vinteCincoCent = fmod(centavos, 50) / 25;
    dezCent = fmod(fmod(centavos, 50), 25) / 10;
    cincoCent = fmod(fmod(fmod(centavos, 50), 25), 10) / 5;
    umCent = fmod(fmod(fmod(fmod(centavos, 50), 25), 10), 5);

    cout << "MOEDAS:\n";
    cout << umMoeda << " moeda(s) de R$ 1.00\n";
    cout << cinquentaCent << " moeda(s) de R$ 0.50\n";
    cout << vinteCincoCent << " moeda(s) de R$ 0.25\n";
    cout << dezCent << " moeda(s) de R$ 0.10\n";
    cout << cincoCent << " moeda(s) de R$ 0.05\n";
    cout << umCent << " moeda(s) de R$ 0.01\n";
    
    return 0;
}
