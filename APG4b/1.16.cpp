#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> a) {
    for(int i = 0; i < 4; i ++) {
        if(a[i]==a[i+1]) return true;
    }
    return false;
}
int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
  cout << (solve(data) ? "YES" : "NO") << endl;
}