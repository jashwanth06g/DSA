#include <iostream>
using namespace std;

void traverse(int a[], int n, int i){ // i is start index, n is array length
    if(i >= n){
        return;
    }
    cout<<a[i]<< " ";
    traverse(a, n, i+1);
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
    traverse(a, 5, 0);
    return 0;
}