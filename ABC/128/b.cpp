#include <bits/stdc++.h>
using namespace std;
typedef pair<string, int> p;
bool compare_by_b(pair<string, int> a, pair<string, int> b) {
    if(a.first == b.first){
        return a.second > b.second;
    }else{
        return a.first < b.first;
    }
}

int main() {
    int n;cin >> n;
    vector<p> sp(n);
    vector<p> index(n);
    for(int i = 0; i < n; i ++) {
        string s; int p; cin >> s >> p;
        sp[i] = make_pair(s,p);
        index[i] = make_pair(s,p);
    }
    sort(sp.begin(), sp.end());
    sort(sp.begin(), sp.end(), compare_by_b);
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++) {
            if(sp[i].first == index[j].first && sp[i].second == index[j].second) cout << j+1 << endl;
        }
    }
    return 0;
}