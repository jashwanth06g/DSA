#include <iostream>
#include <string>
using namespace std;

int main() {
   int s;
   cin>>s;
   switch(s){
   case 30:
        cout<<"Medium";
        break;
   case 38:
        cout<<"Large";
        break;
   case 42:
        cout<<"XLarge";
        break;
   default:
        cout<<"Invalid";
        break;
   }
    return 0;
}