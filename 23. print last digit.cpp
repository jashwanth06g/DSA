#include <iostream>
using namespace std;
int main()
{
    int a, n = 12345;
    while(n>0){
        a=n%10;
        cout<<a<<endl;
        n=n/10;
        
    }
    return 0;
}