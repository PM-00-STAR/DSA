#include<iostream>
#include<vector>

using namespace std;

int main(){
 vector<int>v;//static
 vector<int> *v=new vector<int>();//dynamic
  
 // inserting element inside vector
 v.push_back(10); //push from right
v.push_back(20);
v.push_back(30);

//changing vector values
v[1]=100; //like in arrays
//always use pushback not brackets
cout<<v[0]<<endl;
cout<<v[1]<<endl;
cout<<v[2]<<endl;

    return 0;


   
}