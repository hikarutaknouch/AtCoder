#include <bits/stdc++.h>
using namespace std;

long long ans = 0;
long long n; 

void dfs(long long x, bool three, bool five, bool seven) {
    if(x>n) return;
    if(seven&&five&&three) ans ++;
    dfs(x*10+3, 1, five, seven);
    dfs(x*10+5, three, 1, seven);
    dfs(x*10+7, three, five, 1);
}

int main() {
    cin >> n;
    dfs(0, 0, 0, 0);
    cout << ans << endl;
    return 0;
}