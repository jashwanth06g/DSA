#include<iostream>
using namespace std;
int main(){
    int a[5]={10, 50, 30, 40, 20};
    int small = a[0];
    for(int i = 0; i<5; i++){
        if(small > a[i]){
            small = a[i];
        }
    }
    cout<<small;
    
    return 0;
}