#include <iostream>
using namespace std;

bool sort(int a[], int n, int i){ 
    if(i >= n-1){
        return true;
    }
    if(a[i] > a[i + 1]){
        return false;
    }
    else{
        return sort (a, n, i = i + 1);
    }
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
    cout<<sort(a, 5, 0);
    return 0;
}