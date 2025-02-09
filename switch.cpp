// all about switch statement in cpp
#include <iostream>
using namespace std;
 int main(){
  int num;
  cin>> num;
  char grade='a';
  switch(num){
    case 0: printf("sunday \n");
    break;
    case 1: printf("monday \n");
    break;
    case 2: printf("tuesday \n");
    break;
    case 3: printf("wednesday \n");
    break;
    case 4: printf("thursday \n");
    break;
    case 5: printf("friday \n ");
    break;
    case 6 : printf("saturday \n");
    break;
    default: printf("invalid day index \n" );
  }

  // note : switch in c++ only used for int and char data type
  return 0;
 }