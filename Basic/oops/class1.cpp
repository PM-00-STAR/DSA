#include<iostream>
using namespace std;
class Pratibha{
   int age;
   int roll;
   int rollNumber;
public:
//default construction function

Pratibha(){
    cout<<" default constructor called "<<endl;
}
//as soon as parametised constructor is made default constructor goes away
//parametised constructor
Pratibha(int n,int r){
    cout<<"this:"<<this<<endl;
    this->age = n;                //age and roll are properties
    roll=r;       //here u may or may not use this keyword
}

//when both parameter and property name are same
//How to distinguish?
//use this keyword
//this acts as a pointer to object
Pratibha(int rollNumber){
    this->rollNumber = rollNumber; //here it is mandatory to use this keyword
    
}
 
 void display(){
     cout<<age<<" "<<roll<<" "<<rollNumber<<endl;
 }

};