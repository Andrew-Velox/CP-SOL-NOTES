// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O

#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fx(x) fixed<<setprecision(x)
using namespace std;

void speed(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

void solve(){
    ll int n; cin >> n;
    char c;
    int val[26]={0};
    for(int x=1; x<=n; x++){
        cin >> c;
        val[int(c-97)]++;
    }

    for(int x=0; x<26; x++){
        while(val[x]!=0){
            cout << char(x+97);
            val[x]--;
        }
    }
    cout << endl;
    
}

int main(){
    speed();
    ll int t=1;// cin >> t;
    while(t--) solve();
    return 0;
}
