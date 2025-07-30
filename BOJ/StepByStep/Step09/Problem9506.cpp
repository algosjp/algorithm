#include <iostream>

using namespace std;

void printPerfectNum(int n);

int main() {
    int n;
    
    while (true) {
        cin >> n;
        
        if (n == -1) {
            break;
        }

        printPerfectNum(n);
    }

    return 0;
}

void printPerfectNum(int n) {
    int sum = 0;
    bool div[n+1] = {false};

    for (int i=1; i<n; i++) {
        if (n%i == 0) {
            sum += i;
            div[i] = true;
        }
    }

    string prt = to_string(n);
    if (sum != n) {
        prt += " is NOT perfect.";
    }
    else if (sum == n) {
        prt += " = 1";
        for (int i=2; i<n+1; i++) {
            if (div[i]) {
                prt += " + " + to_string(i);
            }
        }
    }

    cout << prt << "\n";

    return;
}