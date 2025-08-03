#include <iostream>
#include <algorithm>

using namespace std;

bool ascending(int a, int b);
int cntSmaller(int sortArr[], int x, int l);

int main() {
    int N;
    cin >> N;

    int xArr[N], sortArr[N];
    for (int i=0; i<N; i++) {
        cin >> xArr[i];
        sortArr[i] = xArr[i];
    }

    sort(sortArr, sortArr+N, ascending);
    int* endPtr = unique(sortArr, sortArr+N);
    int l = endPtr - sortArr;

    for (int x : xArr) {
        cout << cntSmaller(sortArr, x, l) << " ";
    }
    cout << "\n";

    return 0;
}

bool ascending(int a, int b) {
    return a < b;
}

int cntSmaller(int sortArr[], int x, int l) {
    int left = 0, right = l;
    while (left < right) {
        int mid = (left + right) / 2;
        if (sortArr[mid] < x)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}