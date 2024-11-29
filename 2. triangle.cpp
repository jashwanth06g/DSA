#include <iostream>
#include <string>
using namespace std;

int main() {
   int x,y,z,a;
   cin>>x;
   cin>>y;
   cin>>z;
   a = x+y+z;
   if(a == 180){
       cout<<"Triangle can be formed.";
   }
   else{
       cout<<"Triangle cannot be formed.";
   }

    return 0;
}