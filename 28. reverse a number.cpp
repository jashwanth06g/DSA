#include <iostream>
using namespace std;
int main(){
    int sum=0, n = 123456;
    while(n>0){
        sum = 10 * sum + (n%10);
        n = n / 10;
    }
    cout<<sum;
    return 0;
    
}