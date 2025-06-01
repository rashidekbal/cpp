#include <iostream>
using namespace std;
int main(){
 // 1d array 
  string name[]={
    "rashid","saloni"
  };
  cout << name[0] <<endl;
// important point to note here that in 2d array the second dimension must have a boundary for first it is not needed
  string names[][2]={
    {"rajni","ranjit"},{"saloni","sana"}
  };
  cout << names[1][0] << endl; //must print saloni

  // all function on array
  return 0;

}
