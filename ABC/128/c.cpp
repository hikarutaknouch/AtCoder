#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    vector<vector<int>> s(m);
    for(int i = 0; i < m; i ++) {
        int k; cin >> k;
        for(int j = 0; j < k; j ++) {
            int tmp; cin >> tmp; tmp --;
            s[i].push_back(tmp);
        }
    }
    vector<int> p(m);
    for(int i = 0; i < m; i ++) cin >> p[i];
    int ans = 0;
    for(int bit = 0; bit < (1<<n); bit ++) { //0~n-1の部分集合の全探索(=全ての部分集合の列挙)
        bool ok = true;
        for(int i = 0; i < m; i ++) {
            int count = 0;
            for(auto v : s[i]) {
                if(bit & (1<<v)) count ++; //vがbitに入っているかどうか
            }
            if(count%2 != p[i]) ok = false; //割ったあまりがp[i]に等しいかチェック
        }
        if(ok) ans ++; //全ての電球がついていたら
    }
    cout << ans << endl;
    return 0;
}