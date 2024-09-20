/*
Given array a of N integers. Given Q queries and 
in each query given a number X, print 
the count of that number in the array.

Constraints:
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5
*/

#include <bits/stdc++.h>
using namespace std;
const int N=1e7+1;
int cnt[N];
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr[i]=x;
		cnt[x]++;
	}
	int q;
	cin>>q;
	while(q--){
		int X;
		cin>>X;
		cout<<cnt[X]<<endl;
	}
}