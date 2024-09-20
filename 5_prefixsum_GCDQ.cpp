/*
Given an array A of integers of size N. You will
be given Q queries where each query is represented by
two integers L,R. You have to find gcd of array 
after excluding the part from range L to R 
inclusive (1 based indexing). You are guaranteed 
that after excluding the part of the array remaining 
part is not empty.

Constraints "1":
T>=2
N<=100
1<=A[i]<=10^5
1<=Q<=N
1<=L,R<=N and L<=R

Constraints "2":
T>=2
N<=10^5
1<=Q<=N
1<=A[i]<=10^5
1<=L,R<=N and L<=R
Sum of N over all test cases will be <= 10^6

Sample input:
1
3 3
2 6 9
1 1
2 2
2 3

Sample output:
3
1
2
*/
 

// // brute-force approach 
// #include <bits/stdc++.h>
// using namespace std;
// const int N=110;
// int arr[N];
// int gcd(int a, int b){
// 	if(a==0) return b;
// 	return gcd((b%a),a);
// }
// int main(){
// 	int arr_n;
// 	cin>>arr_n;
// 	while(arr_n--){
// 		int n,q;
// 		cin>>n>>q;
// 		for(int i=0;i<n;i++){
// 			cin>>arr[i];
// 		}
// 		while(q--){
// 			int L,R;
// 			cin>>L>>R;
// 			L--;
// 			R--;
// 			int result=-1;
// 			for(int i=0;i<n;i++){
// 				if(i<L || i>R){
// 					if(result==-1){
// 						result=arr[i];
// 					}
// 					else{
// 						result=gcd(result,arr[i]);
// 					}
// 					if(result==1) break;
// 				}
// 			}
// 			cout<<result<<endl;
// 		}
// 	}
// }
// //TC: O(log(n))+O(T*N^2) ~ O(T*N^2)



// //a better approach with in-built gcd function
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,q;
// 		cin>>n>>q;
// 		int arr[n+10];
// 		for(int i=1;i<=n;i++){
// 			cin>>arr[i];
// 		}
// 		while(q--){
// 			int L,R;
// 			cin>>L>>R;
// 			int gc=0;
// 			for(int i=1;i<=L-1;i++){
// 				gc=__gcd(gc,arr[i]);
// 			}
// 			for(int i=R+1;i<=n;i++){
// 				gc=__gcd(gc,arr[i]);
// 			}
// 			cout<<gc<<endl;
// 		}
// 	}
// }
// //TC: Same as above



// most efficient approach
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int arr[n+10];
		int forward[n+10];
		int backward[n+10];
		forward[0]=backward[n+1]=0;
		for(int i=1;i<=n;i++){
			cin>>arr[i];
		}
		for(int i=1;i<=n;i++){
			forward[i]=__gcd(forward[i-1],arr[i]);
		}
		for(int i=n;i>=1;i--){
			backward[i]=__gcd(backward[i+1],arr[i]);
		}
		while(q--){
			int l,r;
			cin>>l>>r;
			cout<<__gcd(forward[l-1],backward[r+1])<<endl;
		}
	}
}
// TC: O(T*(N+N)) < 10^6



















