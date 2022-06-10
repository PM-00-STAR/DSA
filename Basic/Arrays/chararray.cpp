//taking input and output of character array
#include<iostream>
using namespace std;

int main(){
    // char a[]=" ";
    // char arr[50];   //first declare char array and its size//last element is always null character 
    // cin.getline(a,100,'o');//getline helps to avoid negligence of space//'o' is delimiter
     // cin>>arr;
    // cout<<endl<<arr;

    char a[100];
    
    //cin>>a;
 cin.getline(a,100); //cin.getline is better than cin
//     a[3]='x';
//    a[4]='0';

//     abc
// abcx0■a  //from 5th index all are garbage values and 7th index garbage value is null character itself

//  a[4]='\0';
// abc
// abcx


    cout<<a<<endl;
    return 0;
}


//for writing input and output we don't need to write forloop