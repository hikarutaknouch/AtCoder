#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> p;

const long INF = 10e9+1;

int main() {
    int n; cin >> n;
    vector<long> a(n);
    for(int i = 0; i < n; i ++) cin >> a[i];
    vector<p> b;
    sort(a.begin(), a.end());
    b.push_back(make_pair(a[0],1));
    int bi = 0;
    for(int i = 1; i < n; i++) {
        if(a[i]==a[i-1]) b[bi].second ++;
        else {
            b.push_back(make_pair(a[i],1));
            bi ++;
        }
    }
    long count = 0L;
    for(int i = 0; i < b.size(); i ++) {
        if(b[i].first > b[i].second) count += b[i].second;
        else if(b[i].first < b[i].second) count += b[i].second - b[i].first;
        else continue;
    }
    cout << count << endl;
    return 0;
}