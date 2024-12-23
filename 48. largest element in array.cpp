#include<iostream>
using namespace std;
int main(){
    int a[5]={10, 50, 30, 40, 20};
    int large = a[0];
    for(int i = 0; i<5; i++){
        if(large < a[i]){
            large = a[i];
        }
    }
    cout<<large;
    
    return 0;
}