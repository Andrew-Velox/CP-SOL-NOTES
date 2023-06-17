#include <bits/stdc++.h>
using namespace std;

int main(){
    // take 3 digit input and check its armstrong or not
    int x,n,a,b,c;
    int t,tt,ttt,res;

    cin >> n;
    a=n;
    b=n;

    // 1st number loop
    while(a>=10){
        a/=10;
    }

    // 2nd Number loop
    while(b>=100){
        b/=10;
        for(x=0; x<b;x++){
            b=b%10;
        }
    }
    
    // Third Number Loop
    for(x=0;x<n;x++){
        c = n%10;
    }

    t = a*a*a;
    tt = b*b*b;
    ttt = c*c*c;
    res=t+tt+ttt;

    if(n==res){
        cout << "Its an Armstrong Number. :)";
    }
    else if(n!=res){
        cout << "Its not an Armstrong Number. :)";
    }
    else{
        cout << "Please Input Three digit Number. :(";
    }
    return 0;
}
