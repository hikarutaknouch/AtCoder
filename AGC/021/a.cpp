#include <bits/stdc++.h>
using namespace std;

long digitLength(long x) {
    long length = 0;
    while(x>0) {
        length ++;
        x/=10;
    }
    return length;
}

long digitFirst(long x) {
    long first = 0;
    vector<long> digit;
    while(x>0) {
        first = x%10;
        digit.push_back(first);
        x /= 10;
    }
    for(int i = 0; i < digit.size()-1; i ++) {
        if(digit[i] != 9) {
            first --;
            break;
        }
    }
    return first;
}

int main() {
    long n; cin >> n;
    long l = digitLength(n);
    long f = digitFirst(n);
    cout << 9*(l-1) + f << endl;
    return 0;
}