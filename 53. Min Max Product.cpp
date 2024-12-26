#include <iostream>
using namespace std;

int main() {
    int a[5], b[5];
    cout << "ENTER FIRST ARRAY VALUES"<<endl;
    for(int i = 0; i<5; i++){
        cin >> a[i];
    }
    cout << "ENTER SECOND ARRAY VALUES"<<endl;
    for(int i = 0; i<5; i++){
        cin >> b[i];
    }
    int large = a[0];
    for(int i = 0; i< 5; i++){
        if(large < a[i]){
            large = a[i];
        }
    }
    int small = b[0];
    for(int i = 0; i< 5; i++){
        if(small > a[i]){
            small = a[i];
        }
    }
    cout << large * small;
    return 0;
}

