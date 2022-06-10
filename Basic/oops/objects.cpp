#include<iostream>
#include "class.cpp"

using namespace std;

int main(){
 //creating objects statically
//  student s1;
//  student s2;

//  //creating objects dynamically
//  student *s3 = new student;

//  //accesiing classes through objects
// s1.age=24;
// s2.rollNumber=66;

// s1.display();
// s2.display();

// cout<<endl;
// cout<<s1.getname();
// cout<<s2.getname();
   


// (*s3).age=88;
// (*s3).rollNumber=40;

// s3->display();
// //above pointer code is identical to lower arrow code
// s3->age=88;
// s3->rollNumber=40;

// cout<<(*s3).getname()<<endl;
// cout<<s3->getname();
//getters and setters from private access modifier
student s4;
student *s5 = new student;
s4.age=55;
s5->age=22;
s4.getname();
s5->getname();
cout<<endl;
s4.setname(200);
s5->setname(400);

s4.display();
s5->display();

    return 0;
   
}