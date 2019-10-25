#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
const int MOD = 1000000007;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b) {if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b) {if(a<b) a=b;}

template<typename T>
struct edge {
    int to;
    T cost;
    bool operator > (const edge &r) const { return cost > r.cost; }
};

template<typename T>
vector<T> Dijkstra(int s, const vector<vector<edge<T>>> &g) {
    int n = g.size();
    const T INF = numeric_limits<T>::max();
    using E = edge<T>;
    vector<T> dist(n,INF);
    priority_queue<E, vector<E>, greater<E>> que;
    dist[s] = 0;
    que.push({s,0});
    while(!que.empty()) {
        E now = que.top(); que.pop();
        if(dist[now.to] < now.cost) continue;
        for(auto next : g[now.to]) {
            if(dist[next.to] > dist[now.to] + next.cost) {
                dist[next.to] = dist[now.to] + next.cost;
                que.push({next.to, dist[next.to]});
            }
        }
    }
    return dist;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n,l; cin >> n >> l;
    vector<vector<edge<ll>>> g(l+1);
    REP(i,n) {
        int l,r,c; cin >> l >> r >> c;
        g[l].emplace_back(edge<ll>{r,c});
    }
    REP(i,l) g[i+1].emplace_back(edge<ll>{i,0});
    vector<ll> dist = Dijkstra(0, g);
    cout << dist[l] << endl;
    return 0;
}