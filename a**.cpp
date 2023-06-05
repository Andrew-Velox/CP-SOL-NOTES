#include <iostream>

using namespace std;
int main(){
    long long int a,b,c;

    cin >> a >> b >> c;
    if((a<b && a<c) && (b>a && b>c)){
        cout << a << " " << b;
    }
    else if((b<a && b<c) && (a>b && a>c)){
        cout << b << " " << a;
    }
    else if(b==a && b<c){
        cout << b << " " << c;
    }
    else if(a==b && c<a){
        cout << c << " " << a;
    }
    else if(a==b && a<c){
        cout << a << " " << c;
    }
    else if(a==c && b<a){
        cout << b << " " << a; 
    }
    else if(a==c && a<b){
        cout << a << " " << b; 
    }
    else if(b==c && b<a){
        cout << b << " " << a;
    }
    else if((a<b && a<c) && (c>a && c>b)){
        cout << a << " " << c;
    }
    else if((c<a && c<b) && (a>b && a>c)){
        cout << c << " " << a;
    }
    else if((b<a && b<c) && (c>a && c>b)){
        cout << b << " " << c;
    }
    else if((c<a && c<b) && (b>a && b>c)){
        cout << c << " " << b;
    }
    else{
        cout << a << " " << b;
    }
}
