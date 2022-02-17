#include <bits/stdc++.h>

using namespace std;

int main() {
  bool contemZero;
  int N, colorido, j;
  vector<int> Q, espacos, zeros;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> colorido;
    Q.push_back(colorido);
    if (colorido == -1) {
      Q.push_back(10);
    } else {
      Q.push_back(colorido);
    }
    if (colorido == 0) {
      zeros.push_back(i);
    }
  }

  for (int i = 0; i < N; i++) {
    espacos.push_back(0);
    j = i;
    contemZero = false;

    if (Q[i] == 0) {
      contemZero = true;
    }

    if (contemZero) {
      j = N;
    }

    if (!contemZero) {
      while (Q[j] != 0) {
        espacos[i]++;
        ++j;
      }
    }

    cout << espacos[i] << " ";
  }

  return 0;
}
