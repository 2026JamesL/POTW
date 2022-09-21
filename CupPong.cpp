#include <iostream>
using namespace std;

signed main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n = 11;
  double p[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) p[i][j] = 0.0;
  }
  for(int i = 1; i < n; i++) p[0][i] = 1.0;
  for(int i = 1; i < n; i++) {
    for(int j = 1; j < n; j++) {
      p[i][j] = ((double)i * (double)(11 - j) * p[i - 1][j] + (double)(11 - i) * (double)j * p[i][j - 1] + (double)i * (double)j * p[i - 1][j - 1]) / (121 - (double)(11 - i) * (double)(11 - j));
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) cout << p[i][j] << " ";
    cout << "\n";
  }
  cout << p[n - 1][n - 1] << "\n";
}
