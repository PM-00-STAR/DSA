#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
  int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    cout<<endl;

cout<<"before reverse"<<endl;
for (int i = 0; i < n; i++)
    {
      
        cout<<a[i]<<" ";
    }
    
    int s = 0;
    int e = n-1;
    while(s<e)
    {
      swap(a[s],a[e]);

    
    s++;
    e--;
    }
     cout<<endl;
     cout<<"after reverse"<<endl;
   for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    

    return 0;
   
}