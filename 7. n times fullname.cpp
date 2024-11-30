#include<iostream>
#include<string>
using namespace std;
int main(){
    int x;
    string a, b, c;
    cin>>x;
    cin>>a;
    cin>>b;
    c = a + b;
    for(int i = 0; i < x; i++ ){
        cout<<c<<endl;
    }
    
    return 0;
}