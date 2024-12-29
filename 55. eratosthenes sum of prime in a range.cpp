#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int l, r, sum = 0;
    cin>>l;
    cin>>r;
    int a[r] = {0};
    for(int i = 2; i<sqrt(r); i++){
        for(int j = 2*i; j <= r; j = j+i){
            a[j] = 1;
        }
    }
    for(int i = l; i<r; i++){
        if(a[i] == 0){
            cout<<i<<" ";
            sum = sum + i;
        }
    }
    cout << sum;
    return 0;
}