#include <iostream>
using namespace std;

int search(int a[], int n, int i, int target){ 
    if(i >= n){
        return -1;
    }
    if(a[i] == target){
        return i;
    }
    else{
        return search(a, n, i+1, target);
    }
   
    
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
    cout<<search(a, 5, 0, 3);// i is start index, n is array length, target is the value need to find
    return 0;
}