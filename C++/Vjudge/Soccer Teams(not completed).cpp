#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,dig,temp;
    cin >> t;
    int anArr[10];
    while(t-- > 0) {
        temp = 25;
        dig = 0;
        vector<int> v;
        for(int m=1; m<10; m++) {
            cin >> anArr[m];
            for(int n=0; n<anArr[m]; n++) {
                v.push_back(m);
            }
        }
        dig = v.size();
        while(temp-- > 0) {

        }
    }
}
