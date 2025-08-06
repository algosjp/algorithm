#include <iostream>

using namespace std;

int gcd(int a, int b);

int main() {
    int T;
    cin >> T;

    int A, B;
    for (int i=0; i<T; i++) {
        cin >> A >> B;
        cout << A*B/gcd(A, B) << "\n";
    }

    return 0;
}

int gcd(int a, int b) {
    int temp = a;
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