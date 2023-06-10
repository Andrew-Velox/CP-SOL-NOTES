#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n,odd=0;
    long long int a,b;
    cin >> n;
    while(n--){
    cin >> a >> b;

    for(int y=a; y<b; y++){
        if(y%2!=0){
            odd++;
        }
    }
    cout << odd << endl;
    odd = 0;
    }
}
