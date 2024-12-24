#include <iostream>
using namespace std;

int main()
{
    int a[5], k;
    cin >> k;
    for(int i = 0; i<5; i++){
        cin >> a[i];
    }
    for(int i = 0; i<5; i++){
        if(k == i){
            cout<<a[i];
        }
    }

    return 0;
}