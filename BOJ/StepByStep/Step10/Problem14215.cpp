#include <iostream>

using namespace std;

void makebiggestA(int& a, int& b, int& c);

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    makebiggestA(a, b, c);
    
    cout << min(a+b+c, 2*(b+c)-1) << "\n";
    
    return 0;
}

void makebiggestA(int& a, int& b, int& c) {
    int temp;

    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    return;
}