#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}

