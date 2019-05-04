#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> ans(2,0);
    for(int i = 1; i <= n; i ++) {
        int tmp = i;
        int count = 0;
        while(true) {
            if(tmp%2!=0) break;
            count ++;
            tmp /= 2;
        }
        if(count >= ans[1]) {
            ans[1] = count;
            ans[0] = i;
        }
    }
    cout << ans[0] << endl;
}