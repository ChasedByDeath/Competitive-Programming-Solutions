#include<bits/stdc++.h>
using namespace std;
//#pragma gcc optimize("O3")
//#pragma gcc optimize("unroll-loops")
#ifdef EVAH
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
#define PI acos(-1.0)
#define N 100000000


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        deque<int> aDeq;
        For(0,n) {
            cin >> temp;
            if(aDeq.size()==0) {
                aDeq.pb(temp);
            } else {
                if(aDeq[aDeq.size()-1]>temp) {
                    aDeq.pb(temp);
                } else {
                    if(aDeq.size()>1) {
                        while(true) {
                            if(aDeq.size()>1 && aDeq[aDeq.size()-1]<temp) {
                                aDeq.pop_back();
                            } else {
                                break;
                            }
                        }
                        if(aDeq[aDeq.size()-1]>temp) aDeq.pb(temp);
                    }
                }
            }
        }
        if(aDeq.size() == 1) cout << "YES\n";
        else cout << "NO\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}
