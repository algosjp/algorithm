#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string comp;
    if (a > b) {comp = ">";}
    else if (a < b) {comp = "<";}
    else if (a == b) {comp = "==";}

    cout << comp << "\n";
    
    return 0;
}