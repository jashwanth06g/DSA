#include <iostream>
using namespace std;

int main()
{
    int n = 20;
    for(int i = 1; i < n; i++){
         int f = 0;
         for(int j = 1; j < n; j++){
             if(i % j == 0){
                 f++;
             }
         }
         if(f == 2){
             cout<<i<<" ";
         }
    }
    

    return 0;
}