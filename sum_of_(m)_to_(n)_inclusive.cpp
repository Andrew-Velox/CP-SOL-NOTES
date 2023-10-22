// You are given a range represented by two integers L and R, and you should find the sum of the numbers in the range between L and R inclusive. //
// input: 4 16
// ans : 130

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void speed(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
}

void solve(){
    ll int l,r; cin>> l >> r;
    if(l>r) swap(l,r);

    //------* formula: (big*(big+1)/2) - (small*(small-1)/2) ------*\\

    cout << (r*(r+1)/2) - (l*(l-1)/2) << "\n";
}

int main(){
    speed();
    ll int t; cin >> t;
    while(t--) solve();

    return 0;
}
