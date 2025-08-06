#include <iostream>

using namespace std;

long gcd(long a, long b);

int main() {
    long a, b, c, d;
    cin >> a >> b >> c >> d;

    long num = a*d + b*c, div = b*d;
    long GCD = gcd(num, div);
    cout << num/GCD << " " << div/GCD << "\n";
    
    return 0;
}

long gcd(long a, long b) {
    long temp = a;
    a = max(a, b);
    b = min(temp, b);

    while (true) {
        temp = b;
        b = a%b;
        a = temp;

        if (b == 0) {
            break;
        }
    }

    return a;
}