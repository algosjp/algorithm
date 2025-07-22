#include <iostream>

using namespace std;

int main() {
    int year;
    cin >> year;

    int ret;
    if ((year%4 == 0 && year%100 != 0) || year%400 == 0) {ret = 1;}
    else {ret = 0;}

    cout << ret << "\n";
    
    return 0;
}