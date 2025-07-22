#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int prize;
    if (a == b && b == c) {prize = 10000 + a*1000;}
    else if (a != b && b != c && c != a) {prize = max(max(a, b), c)*100;}
    else if (a == b || b == c) {prize = 1000 + b*100;}
    else if (c == a) {prize = 1000 + 100*a;}

    cout << prize << "\n";
    
    return 0;
}