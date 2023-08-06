[![Stargazers][stars-shield]][stars-url]
[![Forks][forks-shield]][forks-url]
[![LinkedIn][linkedin-shield]][linkedin-url]

[forks-shield]: https://img.shields.io/github/forks/Andrew-Velox/CP-SOL-NOTES.svg?style=for-the-badge
[forks-url]: https://github.com/Andrew-Velox/CP-SOL-NOTES/network/members
[stars-shield]: https://img.shields.io/github/stars/Andrew-Velox/CP-SOL-NOTES.svg?style=for-the-badge
[stars-url]: https://github.com/Andrew-Velox/CP-SOL-NOTES/stargazers
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/mohabbat69

<h1 align="center"> Solution Of Some basic Codeforces Problems & Notes. 👾🎯 </h1>

### Table of Contents
- [[Codes] Check how I solve this problems of Contest 1](#codes-check-how-I-solve-this-problems-of-contest-1)
- [[Codes] Check how I solve this problems of Contest 2](#codes-check-how-I-solve-this-problems-of-contest-2)
- [[Codes] Some Other Problems. ](#other)




**Goal:** Solve ALL problems.
- Contest 1: [link](https://codeforces.com/group/MWSDmqGsZm/contest/219158)
- Contest 2: [link](https://codeforces.com/group/MWSDmqGsZm/contest/219432)
<!--- Contest 3: [link](https://vjudge.net/contest/468964) -->


IT IS HIGHLY RECOMMENDED TO READ AND UNDERSTAND THE FOLLOWING CODES EVEN IF YOU SOLVE A PROBLEM ON YOUR OWN.

### [Codes] Check how I solve this problems of Contest 1
<details> <summary> smash me </summary>

<b>1. Problem A</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>
using namespace std;
int main(){
    string n;
    cin >> n;
    cout << "Hello, " << n << endl;
}
```

</details>
<br>

<b>2. Problem B</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>
using namespace std;
int main(){
    //Only one: int, long long, char, float and double respectively.
    string p;
    int n;
    long long s;
    char r;
    float d;
    double rr;
    cin >> n >> s >> r >> d >> rr;
    cout << n << endl;
    cout << s << endl;
    cout << r << endl;
    cout << d << endl;
    cout << rr << endl;
    
}
```

</details>
<br>

<b>3. Problem C</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>
using namespace std;
int main(){
    long long int a,b;
    
    cin >> a >> b;
    cout << a << " + " << b << " = " << a+b << endl;
    cout << a <<" * " << b << " = " << a*b << endl;
    cout << a << " - " << b << " = " << a-b << endl;
    
}
```

</details>
<br>

<b>4. Problem D</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>
using namespace std;
int main(){
    long long int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << "Difference = " << (a*b)-(c*d) << endl;
}
```

</details>
<br>

<b>5. Problem E</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>
#include<iomanip>

using namespace std;
int main(){
    double a,ans,pi=3.141592653;

    cin >> a;
    ans = pi*a*a;
    cout << fixed << setprecision(9) ;
    cout << ans;
}
```

</details>
<br>

<b>6. Problem F</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>
using namespace std;

int main(){
    long long int a,b,n,x,y;
    cin >> n >> y;
    
    
    for(x=1;x<=1;x++){
        a = n%10;
        b = y%10;
        }
    cout << a+b;
    
}
```

</details>
<br>

<b>7. Problem G</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>
using namespace std;

int main(){
    long long int a=0,n,x;
    cin >> n;
    a = (n * (n + 1)) / 2;
    cout << a;    
}
```

</details>
<br>

<b>8. Problem H</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double a,b;

    cin >> a >> b;
    double all1 = a/b;

    cout << "floor " << a << " / " << b << " = " << floor(all1) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(all1) << endl;
    cout << "round " << a << " / " << b << " = " << round(all1) << endl;

}
```

</details>
<br>

<b>9. Problem I</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>

using namespace std;
int main(){
    double a,b;

    cin >> a >> b;
    if(a>=b){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
```

</details>
<br>

<b>10. Problem J</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>

using namespace std;
int main(){
    long long int a,b;

    cin >> a >> b;
    if(a%b==0 || b%a==0){
        cout << "Multiples";
    }
    else 
    {
        cout << "No Multiples";
    }
}
```

</details>
<br>

<b>11. Problem K</b>

<details> <summary> Code(C++) </summary>

```c++
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
```

</details>
<br>

<b>12. Problem L</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    string c,d;

    cin >> a >> b;
    cin >> c >> d;

    if(b==d){
        cout << "ARE Brothers";
    }
    else{
        cout << "NOT";
    }
}
```

</details>
<br>

<b>13. Problem M</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>

using namespace std;
int main(){
    char c;
    cin >> c;
    if(c>='A' && c<='Z'){
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL";
    }
    else if(c>='a' && c<='z'){
        cout << "ALPHA" << endl;
        cout << "IS SMALL";
    }
    else{
        cout << "IS DIGIT";
    }
}
```

</details>
<br>

<b>14. Problem N</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>

using namespace std;
int main(){
    char c;
    cin >> c;
    if(c>='A' && c<='Z'){
        auto x = int(c)+32;
        cout << (char)x;
    }
    else if(c>='a' && c<='z'){
        auto y =int(c)-32;
        cout << (char)y;
    }   
}
```

</details>
<br>

<b>15. Problem O</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>

using namespace std;
int main(){
    long long int a,b;
    char s;


    cin >> a >> s >> b;

    if(s=='+'){
        cout << a+b;
    }
    else if(s=='-'){
        cout << a-b;
    }
    else if(s=='*'){
        cout << a*b;
    }
    else{
        cout << a/b;
    }
}
```

</details>
<br>

<b>16. Problem P</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>
using namespace std;
 
int main(){    
    long long int n;
    
    cin >> n;  
    while (n >= 10)
        n /= 10;   
    if(n%2==0){
        cout << "EVEN";
    }
    else{
        cout << "ODD";
    }
    
}
```

</details>
<br>

<b>17. Problem Q</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){

    float x,y;

    cin >> x >> y;

    if( x>0 && y>0) cout << "Q1" << endl;
    else if( x<0 && y>0) cout << "Q2" << endl;
    else if( x<0 && y<0) cout << "Q3" << endl;
    else if( x>0 && y<0) cout << "Q4" << endl;
    else if( x==0 && y == 0) cout << "Origem" << endl;
    else if( x>0 || x<0 && y == 0) cout << "Eixo X" << endl;
    else if( x==0 && y<0 || y>0) cout << "Eixo Y" << endl;
    return 0;
}
```

</details>
<br>

<b>18. Problem R</b>

<details> <summary> Code(C++) </summary>

```c++
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
```

</details>
<br>

<b>19. Problem S</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    // [0,25], (25,50], (50,75], (75,100]
    float n;

    cin >> n;

    if(n>=0 && n<=25){
        cout << "Interval [0,25]";
    }
    else if(n>25 && n<=50){
        cout << "Interval (25,50]";
    }
    else if(n>50 && n<=75){
        cout << "Interval (50,75]";
    }
    else if(n>75 && n<=100){
        cout << "Interval (75,100]";
    }
    else{
        cout << "Out of Intervals";
    }

}
```

</details>
<br>

<b>20. Problem T</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    cin >> a >> b >> c;

    // 1st one //
    if(a<b && a<c) cout << a << "\n";
    else if(b<a && b<c) cout << b << "\n";
    else if(c<a && c<b) cout << c << "\n";
    else if(a==b && b==c) cout << a << "\n";
    else if(a==b && a<c) cout << a << "\n";
    else if(a==c && a<b) cout << a << "\n";
    else cout << b << "\n";

    // 2nd one //
    if(a<b && a>c) cout << a << "\n";
    else if(a>b && a<c) cout << a << "\n";
    else if(b<a && b>c) cout << b << "\n";
    else if(b>a && b<c) cout << b << "\n";
    else if(a==b && b==c) cout << a << "\n";
    else if(a==b && b<c) cout << b << "\n";
    else if(a==b && b>c) cout << b << "\n";
    else if(b==c && c<a) cout << c << "\n";
    else if(b==c && c>a) cout << c << "\n";
    else cout << c << "\n";

    // 3rd one //
    if(a>b && a>c) cout << a << "\n";
    else if(b>a && b>c) cout << b << "\n";
    else if(c>a && c>b) cout << c << "\n";
    else if(a==b && b==c) cout << a << "\n";
    else if(a==b && a>c) cout << a << "\n";
    else if(a==c && a>b) cout << a << "\n";
    else cout << b << "\n";

    cout << "\n";

    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    
}
```

</details>
<br>

<b>21. Problem U</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
     double n,n2;
     int num;

     cin >> n;
     num = int(n);
     n2 = n - num;

     if( n2 > 0) cout << "float " << num << " " << n2 << endl;
     else cout << "int " << num << endl; 
     return 0;

}
```

</details>
<br>

<b>22. Problem V</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){

  int a,b;
  string n;

  cin >> a >> n >> b;

  if( a > b && n == ">") cout << "Right" << endl;
  else if( b > a && n == "<") cout << "Right" << endl;
  else if( a==b && n== "=") cout << "Right" << endl;
  else cout << "Wrong" << endl;

  return 0;
}
```

</details>
<br>

<b>23. Problem W</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){

  int a,b,res,ans;
  string n,e;

  cin >> a >> n >> b >> e >> res;


  if( n == "+"){
    ans = a+b;
    if( ans == res){
      cout << "Yes" << endl;
    }
    else {
      cout << ans;
    }
  }
  else if( n == "-" ){ 
    ans = a-b;
    if( ans == res){
      cout << "Yes" << endl;
    }
    else{
      cout << ans;
    }
  }
  else if( n == "*" ){ 
    ans = a*b;
    if( ans == res){
      cout << "Yes" << endl;
    }
    else{
      cout << ans;
    }
  }

  return 0;
}
```

</details>
<br>

<b>24. Problem X</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){

  long long int a,b,c,d;

  cin >> a >> b >> c >> d;
  
  
  if(c<b && c<a && b<d){
    cout << a << " " << b;
  }
  else if(c<b && b<d || c<b && d==b && c>a){
    cout << c << " " << b;
  }
  else if( c<a && d==b ){
    cout << a << " " << b;
  }
  else if(c<a && c<b && d<b && d>a || a==c && d<b){
    cout << a << " " << d;
  }
 
  else if(a==b && b==c && c==d){
    cout << a << " " << b;
  }
  else if( a==c && b==d){
      cout << a << " " << b;
  }
  else if(b==c && b==d){
      cout << b << " " << c;
  }
  else if( a==c && a==d){
    cout << a << " " << c;
  }
  
  else if(b==c && b>a && b<d){
      cout << b << " " << c;
  }
  
  else if( a>c && b<d){
      cout << a << " " << b;
  }
  else if(c>a && d<b){
      cout << c << " " << d;
  }
  
  else if(a==b && b==c){
      cout << b << " " << c;
  }

  else{
    cout << "-1";
  }
  return 0;
}
```

</details>
<br>

<b>25. Problem Y</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int a,b,c,d,ans;

    cin >> a >> b >> c >> d;
    
    a %= 100;
	b %= 100;
	c %= 100;
	d %= 100;

    int ss = a*b*c*d;
 
    ans = ss%100;
    
    if(ans<10){
        cout << 0 << ans << endl;
    }
    else{
        cout << ans << endl;
    }
    return 0;
}
```

</details>
<br>

<b>26. Problem Z</b>

<details> <summary> Code(C++) </summary>

```c++


```

</details>

  </details>

### [Codes] Check how I solve this problems of Contest 2
  <details> <summary> smash me </summary>
<b>1. Problem A</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int x=1; x<=n; x++){
        cout << x << endl; 
    }
}
```

</details>
<br>

<b>2. Problem B</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n==1){
        cout << "-1";
    }
    else{
        for(int x=2; x<=n; x=x+2){
            cout << x << endl;
        }
    }
}
```

</details>
<br>

<b>3. Problem C</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){


    int n,n2,eve=0,odd=0,pos=0,neg=0;

    cin >> n;
    for(int x=1; x<=n; x++){
        cin >> n2;

        if(n2%2==0 || n2%-2==0) eve++;
        else odd++;
        
        if(n2>0) pos++;
        else if(n2<0) neg++;
    }
    cout << "Even: " << eve << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    return 0;
}
```

</details>
<br>

<b>4. Problem D</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(1){
        cin >> n;
        if(n==1999){
            cout << "Correct" << endl;
            exit(0);
        }
        else cout << "Wrong" << endl;
    }


    return 0;
}
```

</details>
<br>

<b>5. Problem E</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,n2,max=-99999;
    cin >> n;

    for( int x=1; x<=n; x++){
        cin >> n2;

        if(n2>max){
            max=n2;
        }

    }
    cout << max << endl;

    return 0;
}
```

</details>
<br>

<b>6. Problem F</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for( int x=1; x<=12; x++){
        cout << n << " * " << x << " = " << n*x << endl; 
    }
    return 0;
}
```

</details>
<br>

<b>7. Problem G</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,n2;
    cin >> n;
    for( int x=1; x<=n; x++){
        long long int res=1;
        cin >> n2;
        for( int y=1; y<=n2; y++){
            res = res*y;
        }
        cout << res << endl;
                
    }
    return 0;
}
```

</details>
<br>

<b>8. Problem H</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,res=0,count=0;
    cin >> n;

    for(int x=2; x<n; x++){
        res = n%x;

        if(res==0) count++;
    }
    if(count>0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;

    }
    return 0;
}

```

</details>
<br>

<b>9. Problem I</b>

<details> <summary> Code(C++) </summary>

```c++


```

</details>
<br>

<b>10. Problem J</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,nn,x,y;
    cin >> n;

    for(x=2; x<=n; x++){
        nn = 1;
        for(y=2; y<x; y++)
            if(x%y==0){
            nn=2;
            break;
        
        }
        if(nn==1) cout << x << " ";
    }
    return 0;
}

```

</details>
<br>

<b>11. Problem K</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,nn,x,y;
    cin >> n;

    for( x=1; x<=n; x++){
        if(n%x==0){
            cout << x << endl;
        }
    }
    return 0;  
}
```

</details>
<br>

<b>12. Problem L</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,gcd;
    cin >> n1 >> n2;

    for(;n2>0;){
        gcd = n1%n2;
        n1 = n2;
        n2 = gcd;
    }

    cout << n1;
    return 0;
}
```

</details>
<br>

<b>13. Problem M</b>

<details> <summary> Code(C++) </summary>

```c++


```

</details>
<br>

<b>14. Problem N</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n1,n2;

    cin >> s;
    cin >> n1;
    for(int x=1; x<=n1; x++){
        cin >> n2;
        for(int y=1;y<=n2; y++){
            cout << s;
        }
        cout << endl;
    }
    return 0;
}
```

</details>
<br>

<b>15. Problem O</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int x=1; x<=n; x++){
        for(int y=1; y<=x; y++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
```

</details>
<br>

<b>16. Problem P</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int x=n;x>=1; x--){
        for(int y=1; y<=x; y++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
```

</details>
<br>

<b>17. Problem Q</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
  int u,n;
  cin >> u;
  while(u--){
    cin >> n;
    if (n == 0) {
      cout << 0 << endl;
      continue;
    }
    while(n>0){
      int last = n%10;
      cout << last << " ";
      int fast = n/10;
      n = fast;
    }
    cout << endl;
  }
  return 0;
}
```

</details>
<br>

<b>18. Problem R</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;

    do{

        int sum = 0;
        cin >> n1 >> n2;

        if(n1<=0 || n2<=0){
            break;
        }
        if(n1>n2){
            for( int x=n2; x<=n1; x++){
                
                cout << x << " ";
                sum = x+sum;
            }
            cout << "sum =" << sum << endl;
        }
        else{
            for( int x=n1; x<=n2; x++){
                
                cout << x << " ";
                sum = x+sum;
            }
            cout << "sum =" << sum << endl;
        }
    }while(1);


    return 0;
}
```

</details>
<br>

<b>19. Problem S</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    for(int x=1; x<=n; x++){
        int n1,n2,sum=0;
        cin >> n1 >> n2;
        if(n1<n2){
            for(int y=n1+1; y<n2; y++){
            if(y%2==1){
                sum=sum+y;
                }
            }
        }
        else{
            for(int y=n2+1; y<n1; y++){
            if(y%2==1){
                sum=sum+y;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
```

</details>
<br>

<b>20. Problem T</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,y;
    cin >> n;

    for(int x=1; x<=n; x++){

        for(y=1; y<=n-x; y++){
            cout << " ";
        }

        for(y=1; y<=x*2-1; y++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
```

</details>
<br>

<b>21. Problem U</b>

<details> <summary> Code(C++) </summary>

```c++



```

</details>
<br>

<b>22. Problem V</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,count=0;
  cin >> n;
  for(int x=1; x<=n*4; x++){
    count=x;
    if(count%4==0){
      cout << "PUM" << endl;
    }
    if(count%4!=0)
    cout << count << " ";
  }
  return 0;
}
```

</details>
<br>

<b>23. Problem W</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    for( int x=1; x<=n; x++){
        for( int y=1; y<=n-x; y++){
            cout << " ";
        }
        for( int y=1; y<=x*2-1; y++){
            cout << "*";
        }
        cout << endl;
    }
    for( int x=n; x>=1; x--){
        for( int y=1; y<=n-x; y++){
            cout << " ";
        }
        for( int y=1; y<=x*2-1; y++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
```

</details>
<br>

<b>24. Problem X</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int u,n,res,nn;
    int a,b;
    cin >> u;

    while(u--){
        int count=0,c=0;
        cin >> n;
        while(n>0){
            res = n/2;
            nn = n%2;
            n = res;
            if(nn==1){
                count++;
            }
        }

        for(int x=0; x<count; x++){
            a = 1*pow(2,x);
            b = a;
            c +=b;
        }
        cout << c << endl;
    }
    return 0;
}
```

</details>
<br>

<b>25. Problem Y</b>

<details> <summary> Code(C++) </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a=1,b=0;
  cin >> n;

  for( int x=1; x<=n; x++){

    int f =a+b;
    a=b;
    cout << a << " ";
    b=f;
  }
  return 0;
}
```

</details>
<br>

<b>26. Problem Z</b>

<details> <summary> Code(C++) </summary>

```c++


```

</details>
<br>


  </details>


### [Codes] Some Other Problems.
<details> <summary> smash me </summary>

<b>1. Problem Age_in_days</b>

<details> <summary> Code(C++) </summary>

```c++
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
```

</details>
<br>

<b>2. Problem Armstrong check for three digit Number</b>

<details> <summary> Code(C++) </summary>

```c++
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
```

</details>
<br>

<b>3. Problem Better_Passwords</b>

<details> <summary> Code(Python) </summary>

```python
tt = input()

r = tt[1:].replace("s","$")
t = r.replace("i","!")
v = t.replace("o","()")

rr = tt[0].upper()

print(rr+v+".")
```

</details>
<br>

<b>4. Problem Divisors</b>

<details> <summary> Code(Python) </summary>

```py
xx = int(input())

for x in range(1,xx+1):
    sum = xx%x
    if sum == 0:
        print(x)
```

</details>
<br>

<b>5. Problem Fibonacci</b>

<details> <summary> Code(Python) </summary>

```python
us = int(input())
a = 0
b = 1
for x in range(us):
    t = b
    sum = a+b
    a = b
    b = sum
    #print(b)
    if b == 0:
        break          
print(t)
```

</details>
<br>

<b>6. Problem Helpful-Maths</b>

<details> <summary> Code(Python) </summary>

```python
# Link: https://codeforces.com/contest/339/problem/A

t = input()
c = 0

tt=sorted(t)
if "+" in tt:    
    tt.remove("+")

for x in t:
    if "+" in (x):
        c = c+1
        
print(*tt[c-1:],sep="+")
```

</details>
<br>

<b>7. Problem Way Too Long Words</b>

<details> <summary> Code(Python) </summary>

```python
w = int(input())

for x in range(w):
    tt = input()    
    
    if len(tt) >10:
        res = (tt[:][0]+str(len(tt[:][1:-1]))+tt[:][-1])
        print(res)
    
    else:
        print(tt)
```

</details>
<br>

<b>8. Problem Word</b>

<details> <summary> Code(Python) </summary>

```python
# Link : https://codeforces.com/contest/59/problem/A

take = input()
up = 0
low = 0

for x in take:
    
    if x.isupper():
        up = up+1
    if x.islower():
        low = low +1

if up < low:
    print(take.lower())    
elif up == low:
    print(take.lower())
elif up>low:
    print(take.upper())
```

</details>
<br>

<b>9. Problem /cin.ignore()</b>

<details> <summary> Code(C++) </summary>

```c++
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int a;
    string ww;
    double b;
    
    cin >> a;
    cin >> b;
    cin.ignore();
    getline(cin, ww);
    
    cout << i+a << endl;
    cout << fixed << setprecision(1);
    cout << b+d << endl;
    cout << s << ww;

    return 0;
}
```

</details>
<br>

<b>10. Problem reverse-array.cpp
</b>

<details> <summary> Code(C++) </summary>

```c++
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
```

</details>
<br>

<b>11. Problem /while(x--)</b>

<details> <summary> Code(C++) </summary>

```c++
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
```

</details>
<br>
    </details>


    
<h3 align="center"> REMEMBER THAT SOLVING MORE PROBLEMS IS THE KEY.</h3>

<h2 align="center"> Good luck <a href="https://emoji.gg/emoji/8771_blobheart"><img src="https://emoji.gg/assets/emoji/8771_blobheart.png" width="16px" height="16px" alt="blobheart"></a></h2>
