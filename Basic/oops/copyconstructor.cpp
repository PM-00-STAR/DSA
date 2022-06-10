#include<iostream>
#include "class1.cpp"

using namespace std;

int main(){
    //static
 Pratibha s6(10,24);  //parametiesed constructor user defined
     cout<<"s6:"<<endl;
 
 s6.display(); 

 Pratibha s7(s6);
     cout<<"s7:"<<endl;//copy inbuilt constructor
 s7.display() ;

 //dynamic parametised copy constructor
  Pratibha *s8=new Pratibha(29,64);//only in dynamic object printing default constructor gets printed
  Pratibha s9(*s8); 
s9.display();
  Pratibha *s10 = new Pratibha (*s8);
  s10->display();
  Pratibha *s11 = new Pratibha (s6);
s11->display();
  

  
    return 0;
   
}

//no cout will be there for object s7