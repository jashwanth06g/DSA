#include <iostream>
using namespace std;

int main()
{
    int a[5];
    for(int i = 0; i<5; i++){
        cin >> a[i];
    }
    for(int i = 0; i<5; i++){
        if(i%2 == 0){
            cout<<a[i];
        }
        else{
            cout<<" ";
        }
    }

    return 0;
}