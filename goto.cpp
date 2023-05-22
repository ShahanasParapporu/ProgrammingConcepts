#include <iostream>
using namespace std;
int main () {
   int i = 1;
   while(1) {
      cout<< i <<"\n";
      if(i == 10)
      goto OUT;
      i++;
   }
   OUT: cout<<"Out of the while loop";
   return 0;
}
