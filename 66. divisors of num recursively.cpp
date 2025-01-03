#include <iostream>
using namespace std;

void divisible(int n, int i){ 
    if (i > n) {
        return;
    }
    if (n % i == 0) {
        cout << i << " ";  // Print divisor
    }
    divisible(n, i + 1);  // Recur for next number
}

int main() {
    int num;
    cin>>num;
    divisible(num, 1); 
    return 0;
}
