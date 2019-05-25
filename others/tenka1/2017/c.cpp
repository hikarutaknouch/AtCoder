//not accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
    long N; cin >> N;
    vector<long> ans(3, N);
    if(N%2==0) ans[2] = N/2;
}