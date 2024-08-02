#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    // Read the size of array A
    int n;
    cin >> n;

    // Read the elements of array A
    vector<char> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    // Read the size of array X
    int m;
    cin >> m;

    // Read the elements of array X
    set<int> X;
    for (int i = 0; i < m; ++i) {
        int index;
        cin >> index;
        X.insert(index);
    }

    // Output the elements of array A excluding the ones at indices in X
    for (int i = 0; i < n; ++i) {
        if (X.find(i) == X.end()) {
            cout << A[i];
        }
    }

    return 0;
}
