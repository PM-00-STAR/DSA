//good question
#include<iostream>
using namespace std;

int length(char input[]){ //in simple arrays we take array and size of array as parameters but due to null character as last character  
//we are taking like this

int count=0;
for(int i =0;input[i] != '\0';i++){
    count++;

}
return count;
}

int main(){
  char a[100];
  cout<<"enter string :"<<endl;
  cin>>a;

  cout<<"length of the string is : " <<length(a)<<endl;
// enter string :
// hello pratibha
// length of the string is : 5

// enter string :
// mathematics
// length of the string is : 11


    return 0;
}

