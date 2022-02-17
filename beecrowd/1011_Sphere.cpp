#include <bits/stdc++.h>

using namespace std;

int main(){
    double R, VOLUME;
    cin >> R;
    cout << fixed << setprecision(3);
    VOLUME = (4 / 3.0) * 3.14159 * (R * R * R);
    cout << "VOLUME = " << VOLUME << "\n";
    return 0;
}