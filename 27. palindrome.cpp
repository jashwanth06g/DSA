#include <iostream>
using namespace std;
int main(){
    int sum=0, n = 5225;
    int i = n;
    while(n>0){
        sum = 10 * sum + (n%10);
        n = n / 10;
    }
    if(sum == i){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
    
}