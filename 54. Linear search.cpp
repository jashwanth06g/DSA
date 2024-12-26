#include <iostream>
using namespace std;

int main() {
    int a[] = {10, 20, 30, 40, 50, 60};
    int key = 30, sum = 0, i;
    for(i = 0; i < 6; i++){
        if(a[i] == key){
            sum = 1;
            break;
        }
    }
    if(sum == 1){
        cout<<i;
    }
    else{
        cout<<"NOT FOUND";
    }
    return 0;
}

