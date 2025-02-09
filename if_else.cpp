
/*  every thing about if else in c++*/
#include <iostream>
using namespace std;
int main(){
 bool isMarried=true;
single if else condition
 if(isMarried){
  printf("rashid is married \n");
 }else{
  printf("rashid is not married \n");

 }

 bool have_kids=true;

 if(isMarried||have_kids){
  printf("married and have kids ");

 }else if (isMarried||!have_kids){
  printf("is married but dont have kids");
 }else if(!isMarried||have_kids){
printf("not married but have kids , iska matlab madherchod hai ye");

 }else{
  printf("pata nahi ye bahen ka loda kya hai");
 }
  return 0;
}