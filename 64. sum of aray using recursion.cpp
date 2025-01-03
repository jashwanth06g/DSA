#include <iostream>
using namespace std;

int sum(int a[], int n, int i){ 
    if(i >= n){
        return 0;
    }
    return a[i] + sum(a, n, i = i + 1);
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
    cout<<sum(a, 5, 0);
    return 0;
}