#include<iostream>
#include "class1.cpp"

using namespace std;

int main(){
  //when a function name is same as the class name ist is called constructor
  //use:it will initialise the properties/datamembers with garbage value 
  //it has no return type
  //no input argument
//static parametised constructor
  Pratibha s1(10,500);
  
  cout<<"address of s1:"<<&s1<<endl; // here for s1 this keyword stores address of s1

 Pratibha s2(99,111);
  cout<<"address of s2:"<<&s2<<endl;

  // Pratibha s2(1);
  // cout<<"rollNumber:"<<&s2<<endl;//here for s2 this keyword stores address of s2

s1.display();
  s2.display();

  //dynamic parametised constructor
  Pratibha *s3=new Pratibha(297,666);//only in dynamic object printing default constructor gets printed
  

  s3->display();

  
    return 0;
   
}