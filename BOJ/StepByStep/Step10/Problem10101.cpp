#include <iostream>

using namespace std;

int main() {
    int angleA, angleB, angleC;
    cin >> angleA >> angleB >> angleC;

    string triangleType;
    if (angleA+angleB+angleC != 180) {
        triangleType = "Error";
    }
    else if (angleA == angleB && angleB == angleC) {
        triangleType = "Equilateral";
    }
    else if (angleA == angleB || angleB == angleC || angleC == angleA) {
        triangleType = "Isosceles";
    }
    else if (angleA+angleB+angleC == 180) {
        triangleType = "Scalene";
    }

    cout << triangleType << "\n";

    return 0;
}