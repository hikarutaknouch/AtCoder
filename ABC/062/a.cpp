#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y; cin >> x >> y;
    vector<vector<int>> a(3);
    a[0] = {1,3,5,7,8,10,12};
    a[1] = {4,6,9,11};
    a[2] = {2};
    for(int i= 0; i < 3; i ++) {
        auto itr1 = find(a[i].begin(), a[i].end(), x);
        auto itr2 = find(a[i].begin(), a[i].end(), y);
        if(itr1!=a[i].end() && itr2!=a[i].end()) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}