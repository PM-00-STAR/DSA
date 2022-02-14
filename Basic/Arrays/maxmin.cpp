//maximum and minimum among elements of array
// #include<iostream>
// #include<climits>
// using namespace std;


// int main(){
//     int n;
//     int i;
//      cin>>n;
//      int arr[n];

//      for(i=0;i<n;i++){
//         cin>>arr[i];   
//      }
//      int maxNo=INT_MIN;     //INT_MIN and INT_MAX are built in functions use climits as header file
//      int minNo=INT_MAX;

//      for(i=0;i<n;i++){
//         if(arr[i]>maxNo){
//              maxNo = arr[i];
//         }                    // maxNo = max(maxNo,arr[i]);
//         if(arr[i]<minNo){
//             minNo = arr[i];
//         }                    //minNo = min(minNo,arr[i]);

//      }
//      cout<<maxNo<<" "<<minNo<<endl;
//     return 0;
// }