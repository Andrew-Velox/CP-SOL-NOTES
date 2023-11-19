// link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-04/challenges/monkey-1-2 (you know how its works!)

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
    string s;
    while(getline(cin,s)){

        sort(s.begin(),s.end());
        
        for (int x=0;x<s.size();x++) {
            if (s[x] == ' ') continue;
            else cout << s[x];
        }
        cout << endl;
    }
}

int main(){
    speed();
    ll int t=1;// cin >> t;
    while(t--) solve();
    return 0;
}

// ------------------contest submission------------------

/* 
#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[100001];
    while(cin.getline(s,100001)){

        sort(s,s+strlen(s));
        long long n = strlen(s);
        for (int x=0;x<n;x++) {
            if (s[x] == ' ') continue;
            else cout << s[x];
        }
        cout << endl;
    }
    return 0;
}
 */
