#include <iostream>
using namespace std;

int main()
{
    int count = 0, n;
    cin>>n;
    while(n>0){
        count = count + 1;
        n = n/10;
    }
    cout<<count;

    return 0;
}