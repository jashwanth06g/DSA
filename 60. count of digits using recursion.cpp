#include <iostream>
using namespace std;

int countdigit(int n){
    while(n>0){
        return 1 + countdigit(n/10);
    }
    return 0;
}
int main()
{
    cout<<countdigit(1000);
    return 0;
}