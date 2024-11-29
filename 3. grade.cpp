#include <iostream>
#include <string>
using namespace std;

int main() {
   int m;
   cin>>m;
   if(m >= 90){
       cout<<"Grade A";
   }
   else if(m >= 80){
       cout<<"Grade B";
   }
   else if(m >= 60){
       cout<<"Grade C";
   }
   else if(m >= 35){
       cout<<"Grade D";
   }
   else{
       cout<<"Fail";
   }
    return 0;
}