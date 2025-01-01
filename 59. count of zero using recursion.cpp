#include <iostream>
using namespace std;

int countzero(int n){
    if(n % 10 == n){
        if( n % 10 == 0){
            return 1;
        }else{
            return 0;
        }
    }
    if(n % 10 == 0){
        return 1 + countzero(n/10);
    }else{
        return countzero(n/10);
    }
}
int main()
{
    cout<<countzero(10000);
    return 0;
}