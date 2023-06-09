#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int num[9999],c;
    cin >> c;

    for(int x=0;x<c;x++){
        cin >> num[x];
    }
    for(int i=c-1; i>=0 ; i--) {
     cout <<  num[i] << " ";
    }

    
}
