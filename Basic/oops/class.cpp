//class is user defined datatype
//it has properties and functions
//we can access private properties using functions
#include<iostream>
using namespace std;
class student{
   

 //by default access modifier is private
int name; //use of private property :one can put constraint on exposure to public

public:
//properties
int age;
 int rollNumber;
 
//functions
void display(){
    cout<<name<<" "<<age<<endl;//getting private propert
}
int getname(){ //getting private property
    return name;
}
void setname(int n,int password){
    if (password!=123){
        return;
    }
    if(n<0){
        return;       //constraint on private property
    }
    name = n;
}

};