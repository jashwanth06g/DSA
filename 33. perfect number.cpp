#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n = 28, sum = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            sum = sum + i;
            if(n/i != n){
                sum = sum + (n/i);
            }
        }
        }
    
    if(sum == n){
        cout<<"Perfect number";
    }
    else{
        cout<<"Not a Perfect number";
    }
    return 0;
}