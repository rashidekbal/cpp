/*
while loop  and  do while loop

*/
#include <iostream>
using namespace std;

int main(){
  //while loop

  int i=0;
  while(i<100){
    cout << i <<endl;
    i++;
  }
   /// do while loop 
   do{
    cout << "printed once only even when condition does not meet";
   }while(i==160);

 

  return 0;
}