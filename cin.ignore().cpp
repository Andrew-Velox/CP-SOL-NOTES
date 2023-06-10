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
