#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
    #define _WIN32_WINNT 0x0500
    #include<windows.h>
#endif
#define openFile(n) ShellExecute(nullptr,"open",n,nullptr,nullptr,SW_SHOWNORMAL);
#define closeP(n) system((string("taskkill /im ")+n+" /f").c_str());
#define closeConsole PostMessage(GetConsoleWindow(), WM_CLOSE, 0, 0);
#define opf "output.txt"
#define ipf "input.txt"
#define mem(n,x) memset(n,x,sizeof(n));
#define sf scanf
#define pf printf
#define ff first
#define ss second
#define pb push_back
#define PII pair<int,int>
#define For(x,n) for(int i=x; i<n; i++)
#define stv v+2*(mid-tl+1)
#define LL long long int
#define N 100001

bool comp(PII l, PII r) {
    if(l.ff <= r.ff) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n,temp,oddMis,evenMis;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        oddMis = evenMis = 0;
        for(int i=0; i<n; i++) {
            cin >> temp;
            if(i&1) {
                if(!(temp&1)) oddMis++;
            } else {
                if(temp&1) evenMis++;
            }
        }
        //cout << "oddMis = " << oddMis << " and evenMis = " << evenMis << "\n";
        if(oddMis == evenMis) cout << oddMis << "\n";
        else cout << "-1\n";
    }

    #ifndef ONLINE_JUDGE
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}
