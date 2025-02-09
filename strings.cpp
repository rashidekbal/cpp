/*
this file contains every thing about strings in cpp all there operations known to me;
*/

#include <iostream>
#include <string>

using namespace std;
int main(){
//declaration 
string name="rashid";
// below is an example of how to check length of string
cout<< name.length() << endl;
// same can be achieved by using .size method;
cout << name.size() << endl;

// to find  any character in string we use at();
cout  << name.at(0);

//for appending to string we use .append();

string name2="mia khalifa";

name.append(name2);
cout<< "appended name is "<< name << endl;
// or we can use + sign in  between 

cout << name2 + name << endl;

//printing a section of string 
cout << name2.substr(0,3) << endl;

// finding charater index ;
cout << name2.find("m") << endl;

//inserting a word or character at any index;

cout << name2.insert(3," bhabhi") << endl;
 
// to erase a specific part of the string we use .erase(startign_index,ending_index);
cout << name2.erase(3 , 5) << endl;

  return 0;
}