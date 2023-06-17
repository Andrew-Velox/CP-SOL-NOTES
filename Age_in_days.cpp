#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    int yr=365,mo=30,count=0,moc=0;
    int temp,motemp;

    cin >> n;

    temp =n;
   if(n>=yr){
    for(int x=yr; x<=n; x+=yr){
        count++;
        temp-=yr;
        }
        cout << count << " years" << "\n";
   }

   else{
    cout << count << " years" << "\n";
   }
   
   motemp =temp;
   
   if(temp>=mo){
    
    for(int x=mo; x<=temp; x+=mo){
        moc++;
        motemp-=mo;
        }
        cout << moc << " months" "\n";
        cout << motemp << " days" << "\n";
    }
    else{
        cout << moc << " months" << "\n";
        cout << motemp << " days" << "\n";
    }
   

}
