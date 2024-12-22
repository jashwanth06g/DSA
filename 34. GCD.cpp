#include <iostream>
using namespace std;

int main()
{
    int a = 25, b = 15, gcd = 1;
    for(int i = 1; i <= b; i++){
        if((a % i == 0) && (b % i == 0)){
            gcd = i;
        }
    }
    cout<<gcd;
    return 0;
}