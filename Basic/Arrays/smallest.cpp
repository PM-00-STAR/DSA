#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cout<<a[i];
    }

    cout<<endl;
    int smallest = INT_MAX;
    int largest = INT_MIN;

for(int i=0;i<n;i++){
    if(a[i]>largest){
        largest=a[i];
    }
}
for(int i=0;i<n;i++){
    if(a[i]<smallest){
        smallest=a[i];
    }
}

cout<<largest<<endl;
cout<<smallest<<endl;

    return 0;
}