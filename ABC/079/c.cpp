#include <bits/stdc++.h>
using namespace std;

int main() {
    string n; cin >> n;
    int abcd[4];
    for(int i= 0; i < 4; i ++) abcd[i] = n[i]-48;
    char op[3];
    for(int i = 0; i < 2; i ++) {
        int ans = abcd[0];
        if(i%2==0) {
            op[0] = '+';
            ans += abcd[1];
        }
        else {
            op[0] = '-';
            ans -= abcd[1];
        }
        for(int j = 0; j < 2; j ++) {
            int anss = ans;
            if(j%2==0) {
                op[1] = '+';
                anss += abcd[2];
            }
            else {
                op[1] = '-';
                anss -= abcd[2];
            }
            for(int k = 0; k < 2; k ++) {
                int ansss = anss;
                if(k%2==0) {
                    op[2] = '+';
                    ansss += abcd[3];
                }
                else {
                    op[2] = '-';
                    ansss -= abcd[3];
                }
                if(ansss==7) {
                    cout << abcd[0] << op[0] << abcd[1] << op[1] << abcd[2] << op[2] <<abcd[3] << '=' << 7 << endl;
                    return 0;
                }
            }
        }
    }
}