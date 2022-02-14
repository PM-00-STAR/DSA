// #include<iostream>
// using namespace std;

// int fact(int n){
//     int factorial =1;
//     int i;
//     for(i=1;i<=n;i++){
//        factorial*=i;
    
//     }
//     return factorial;
// }
// int main(){
	
// 		int n;
//         cin>>n;
//         int ans = fact(n);
//        cout<<ans;
// 	return 0;
// }

//or

//finding factorial using recursion 
// #include<iostream>
// using namespace std;

// int pact(int n){
//     if(n==1){                 //base condition to stop calling of function
//         return 1;
//     }
//     return n*pact(n-1); //function power calling itself
// }
// int main(){
//     int n;
//     cin>>n;

//     cout<<pact(n)<<endl;

//     return 0;
// }