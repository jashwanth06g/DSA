#include <iostream>
using namespace std;

int sumdigit(int n){
    while(n>0){
        return (n%10) + sumdigit(n/10);
    }
    return 0;
}
int main()
{
    cout<<sumdigit(8765);
    return 0;
}