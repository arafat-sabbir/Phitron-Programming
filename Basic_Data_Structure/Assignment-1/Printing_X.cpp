#include <iostream>
using namespace std;

void printPattern(int n) {
    int mid = n / 2;
    for (int i = 0; i < mid; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "\\";
        for (int j = 0; j < n - 2 * (i + 1); j++) {
            cout << " ";
        }
        cout << "/" << endl;
    }
    
    for (int i = 0; i < mid; i++) {
        cout << " ";
    }
    cout << "X" << endl;
    
    for (int i = mid - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "/";
        for (int j = 0; j < n - 2 * (i + 1); j++) {
            cout << " ";
        }
        cout << "\\" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}
