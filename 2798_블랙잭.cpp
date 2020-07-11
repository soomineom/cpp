#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int card[101];
  int hap = 0;

  for (int i = 0; i < n; i++)
    cin >> card[i];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j ++) {
      if (i == j) continue;
      for (int k = j + 1; k < n; k++) {
        if(j == k || i == k ) continue;
        int nowScore = card[i] + card[j] + card[k];
        if (nowScore <= m && nowScore > hap)
            hap = nowScore;
      }

    }

    cout << hap;
}// main
