#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string name, grade;
    double credit, totalgpa = 0, totalcredit = 0;
    while (cin >> name >> credit >> grade) {
        if (grade == "P") {
            continue;
        }

        double g2s;
        if (grade == "A+") {
            g2s = 4.5 * credit;
        }
        else if (grade == "A0") {
            g2s = 4.0 * credit;
        }
        else if (grade == "B+") {
            g2s = 3.5 * credit;
        }
        else if (grade == "B0") {
            g2s = 3.0 * credit;
        }
        else if (grade == "C+") {
            g2s = 2.5 * credit;
        }
        else if (grade == "C0") {
            g2s = 2.0 * credit;
        }
        else if (grade == "D+") {
            g2s = 1.5 * credit;
        }
        else if (grade == "D0") {
            g2s = 1.0 * credit;
        }
        else if (grade == "F") {
            g2s = 0.0 * credit;
        }

        totalgpa += g2s;
        totalcredit += credit;
    }
    totalgpa /= totalcredit;

    cout.precision(6);
    cout << totalgpa << "\n";

    return 0;
}