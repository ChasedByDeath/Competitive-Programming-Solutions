#include<bits/stdc++.h>
using namespace std;
//#pragma gcc optimize("O3")
//#pragma gcc optimize("unroll-loops")
#ifdef EVAH
    #define _WIN32_WINNT 0x0500
    //#include<windows.h>
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

    int t,n,h,w,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        vector<PII> vm;
        vector<pair<int,pair<int,int>>> vh,vw;
        For(0,n) {
            cin >> h >> w;
            vm.pb({h,w});
            vh.pb({h,{w,i+1}});
            vw.pb({w,{h,i+1}});
        }
        sort(vh.begin(),vh.end());
        sort(vw.begin(),vw.end());
        int vhMin[n],vwMin[n];
        vhMin[0] = vh[0].ss.ff;
        vwMin[0] = vw[0].ss.ff;
        For(1,n) {
            if(vh[i].ss.ff<vhMin[i-1]) vhMin[i] = vh[i].ss.ff;
            else vhMin[i] = vhMin[i-1];
            if(vw[i].ss.ff<vwMin[i-1]) vwMin[i] = vw[i].ss.ff;
            else vwMin[i] = vwMin[i-1];
        }
        for(int i=0; i<n; i++) {
            bool flag = 0;
            int ans=-1, lo=0, hi=n-1, mid;
            while(lo<=hi) {
                mid = lo+(hi-lo)/2;
                if(vhMin[mid]<vm[i].ff) {
                    mid =
                }
            }
        }
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}
