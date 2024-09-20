/*
Given T test cases and in each test case a number N. 
Print its factorial for each test case % M
where M = 10^9+7

Constraints
1<=T<=10^5
1<=N<=10^5
*/

// // Crude approach : O(Q*N) ~ O(N^2)
// #include<bits/stdc++.h>
// using namespace std;
// const int M=1e9+7;
// int main(){
// 	int q;
// 	cin>>q;
// 	while(q--){
// 		int n;
// 		cin>>n;
// 		long long fact=1;
// 		for(int i=2;i<=n;i++){
// 			fact=(fact*i)%M;
// 		}
// 		cout<<fact<<endl;
// 	}
// }

// Better approach
#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
const int N=1e5+1;
long long arr[N];
int main(){
	arr[0]=arr[1]=1;
	for(int i=2;i<=N;i++){
		arr[i]=(arr[i-1]*i)%M;
	}
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		cout<<arr[n]<<endl;
	}
}
