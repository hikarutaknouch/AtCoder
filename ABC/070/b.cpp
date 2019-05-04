#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d; cin >> a >> b >> c >> d;
    cout << (b<=c || d<=a ? 0 : (a<=c && b<=d ? b-c : (c<=a && d<=b ? d-a :(a<c&&d<b ? d-c : b-a)))) << endl;
}