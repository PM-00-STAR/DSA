#include<iostream>
#include <vector>
#include<algorithm>  //sort is used in algorithm library
using namespace std;

int main(){
   string s ="abc";
   cout<<s<<endl;

   string s2;
   s2="def";
   cout<<s2<<endl;

   string *p = new string;
   *p = "hello";
   cout<<*p<<endl;//shows string
   cout<<p<<endl; //shows address in hexadecimal form
   
   //for a 2 D string use vector
  vector<string> v;
  v.push_back(s);
   v.push_back("pratibha");
   //for printing vector one has to iterate

   for(int i=0;i<v.size();i++){
       cout<<v[i]<<endl; //v[i] is basically a string
       sort(v[i].begin(),v[i].end());
       cout<<v[i]<<endl;
   }

    string s3;
    // getline(cin,s3);//since we don't know the size of string
    // cout<<s3<<endl;
 //treating string like array
 s3="abcabc";
 cout<<s3[1]<<endl;
s3[0]='d';
cout<<s3<<endl;
    

    return 0;
   
}